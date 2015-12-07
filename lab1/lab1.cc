#include <cmath>
#include "lab1.hh"
#include <algorithm>
#include <string>

//
// The trace class needs a class variable. This is it
//

int Trace::indent = 0;


//
// Parse should be the entry point to your parser class. It will be
// called by the main program, which you also have to write.
//

double Parser::Parse(void)
{
  //Trace       x("Parse");     // Trace execution of Parse

    /* --- Your code here ---
     *
     * Parse the input using recursive descent parsing. You'll need
     * an object of type Scanner to get tokens from the input. Call
     * the Scan method of this object to get the next token in the
     * input stream. 
     */
    return pLine();

    /* --- End your code --- */
}

void Parser::Recover(void)
{

    cerr << "Error recovery.\n" << flush;
    
    /* --- Your code here ---
     *
     * Error recovery routine
     * 
     * Unless you come up with something better, this function should
     * scan tokens until it sees the end of line or end of file.
     * Parsing may be resumed at that point. This means that if an end
     * of line token caused the error, this routine doesn't need to do
     * anything.
     * 
     * Be sure not to scan more tokens than necessary, or it won't be
     * possible to resume parsing.
     */

    for( ;; ){
      Token tok = Next();
      // cout << "Skipping:" << tok.Lookup() << tok.type  << endl;
      if(tok.type == kEndOfLine || tok.type == kEndMark){
        break;
      }
    }
    //Parse();
    /* --- End your code --- */
}

/**
 * Grammar:
 * Line -> Expr <EOL> Line
 *      | <EOL>
 *
 * Expr -> Expr + Term
 *      | Expr - Term
 *      | Term
 * 
 * Term -> Factor
 *      | Factor * Term
 *      | Factor / Term
 *
 * Factor -> Identifier
 *        | Identifier ^ Factor
 *
 * Identifier -> -Identifier
 *            | (Expr)
 *            | id ( Expr )
 *            | id
 *            | numerical
 */

Token Parser::Next() {
    if( mSaved.type == kUninitialized ){
        return scanner.Scan();
    }
    Token t = mSaved;
    mSaved.type = kUninitialized;
    return t;
}

void Parser::Back(Token token) {
    mSaved = token;
}

double Parser::pIdentifier() {
    Token next = Next();
    switch (next.type){
        case kNumber: {
            return next.numberValue;
        }
        case kMinus: {
	  return -pIdentifier(); // Fixed...
        }
        case kLeftParen: {
	  double val = pExpression();
	  Token expected_paren = Next();
	  if( expected_paren.type != kRightParen){
	    cout << "Identifier missing right paran." << endl;
	    throw ParserError();
	  }
	  return val;
        }
        case kIdentifier:
        {
            string tmp = next.symbolValue;
            transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);

            if(tmp == "e") {
                return M_E;
            } else if (tmp == "pi"){
                return M_PI;
            } 

	    Token expected_paren = Next();
	    if( expected_paren.type != kLeftParen){
	      cout << "Identifier missing left paran." << endl;
	      Back(expected_paren);
	      throw ParserError();
	    }

	    if (tmp == "ln" || tmp == "log" || tmp == "exp" || tmp == "sin" || tmp == "cos" ||
                       tmp == "tan" || tmp == "arcsin" || tmp == "arccos" || tmp == "arctan"){
                double val = 0;
                if (tmp == "ln"){
                    val = log ( pExpression() );
                } else if (tmp == "log"){
                    val = log10 ( pExpression() );
                } else if (tmp == "exp"){
                    val = exp ( pExpression() );
                } else if (tmp == "sin"){
                    val = sin ( pExpression() );
                    cout << "sin val: " << val << endl;
                } else if (tmp == "cos"){
                    val = cos(pExpression());
                } else if (tmp == "tan"){
                    val = tan ( pExpression() );
                } else if (tmp == "arcsin"){
                    val = asin ( pExpression() );
                } else if (tmp == "arccos"){
                    val = acos ( pExpression() );
                } else if (tmp == "arctan"){
                    val = atan ( pExpression() );
                }
                expected_paren = Next();
                if( expected_paren.type != kRightParen){
                    cout << "Identifire missing right paran" << endl;
                    Back(expected_paren);
                    throw ParserError();
                }
                return val;
            } else{
                Back(expected_paren);
                throw ParserError();
            }

        }
        case kEndMark: {
            throw ParserEndOfFile();
        }
        default: {
            Back(next);
            throw ParserError();
        }
    }
}

double Parser::pFactor() {
    double v = pIdentifier();
    Token next = Next();
    switch (next.type){
        case kPower: {
            return  pow(v, pFactor());
        }
        default: {
            Back(next);
            return v;
        }
    }
}

double Parser::pTermP(double res){
  Token next = Next();
  switch (next.type){
  case kTimes: {
    return pTermP(res * pFactor());
  }
  case kDivide:{
    return pTermP(res / pFactor());
  }
  default: {
    Back(next);
    return res;
  }
  }
}

double Parser::pTerm() {
  double v = pFactor();
  return pTermP(v);
}

double Parser::pExpP(double res){
  Token next = Next();
  switch (next.type){
  case kPlus: 
    return pExpP(res + pTerm());
  case kMinus: 
    return pExpP(res - pTerm());
  default: 
    Back(next);
    return res;
  }
}

double Parser::pExpression() {
  double val = pTerm();
  return pExpP(val);
}

double Parser::pLine(){
  double val = pExpression();
  Token next = Next();
  switch (next.type){
  case kEndOfLine: {
    return val;  
  }
  case kEndMark: {
    return val;  
  }
  default: {
      Back(next);
    throw ParserError();
  }
  }
}
