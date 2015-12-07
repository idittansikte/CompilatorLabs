#include <iostream>
#include <iomanip>
#include <stdlib.h>

#include "lab1.hh"
#include "lex.hh"

int main(void)
{
    Parser parser;
    double val;

    while (1)
    {
        try
        {
            cout << "Expression: " << flush;
            val = parser.Parse();
            cout << "Result:     " << setprecision(8) << val << '\n' << flush;
        }
        catch (ScannerError& e)
        {
            cerr << e << '\n' << flush;
            parser.Recover();
        }
        catch (ParserError& e)
        {
            //cerr << e << '\n' << flush;
            parser.Recover();
        }
        catch (ParserEndOfFile)
        {
            cerr << "End of file\n" << flush;
            exit(0);
        }
    }
}
