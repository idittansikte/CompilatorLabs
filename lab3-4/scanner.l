%{

#include <stdio.h>
#include "symtab.hh"
#include "ast.hh"
#include "parser.hh"
//#include "parser.tab.hh"

/* --- Your code here ---
 * 
 * This is where C declarations go. If you need to include
 * files for the actions below, this is where you do it.
 */

/* --- End your code --- */

extern void yyerror(char*);
%}

%option yylineno
%option noyywrap
%option 8bit
%option caseless
%option nodefault
%option outfile="scanner.cc"

/* --- Your code here ---
 *
 * This is where Flex declarations go. If you need to include
 * any such declarations, this is where you do it.
 */
%x ML_COMMENT

DIGIT [0-9]
LETTER [a-zA-Z]
EXP (E|e)(\+|\-)?[0-9]+
/* --- End your code --- */

%%

if                                  return IF;
then                                return THEN;
elseif                              return ELSEIF;
else                                return ELSE;
begin                               return XBEGIN;
end                                 return XEND;
while                               return WHILE;
function                            return FUNCTION;
program                             return PROGRAM;
return                              return RETURN;
declare                             return DECLARE;
do                                  return DO;
and                                 return AND;
or                                  return OR;
not                                 return NOT;
":="                                  return ASSIGN;
">="                                return GE;
"<="                                return LE;
"=="                                  return EQ;
"<>"                                return NE;
array                               return ARRAY;
of                                  return OF;

{DIGIT}+                            { return INTEGER; }
{LETTER}+[0-9a-zA-Z_]*              return ID;
[0-9]*(([0-9]+(\.))|((\.)[0-9]+))?{EXP}? return REAL;
\n                    /* Do nothing */
[ \t]+                /* Do nothing */
"//"+.*\n             /* Do nothing */
<INITIAL>{
     "/*"              BEGIN(ML_COMMENT);
}
<ML_COMMENT>"*/"      BEGIN(INITIAL);
<ML_COMMENT>"/*"      fprintf(stderr, "Warning at line %i: Nested comments\n", yylineno);
<ML_COMMENT><<EOF>>   { yyerror("Comment goes beyond end of file."); yyterminate(); }
<ML_COMMENT>"*"       /* Do nothing */
<ML_COMMENT>\n        /* Do nothing */
<ML_COMMENT>.         /* Do nothing */


<<EOF>>                             yyterminate();
.                                   return yytext[0];

%%
