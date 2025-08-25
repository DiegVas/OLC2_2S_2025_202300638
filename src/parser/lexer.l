%{
#include <stdio.h>
#include <stdlib.h>
#include "parser.tab.h"
extern int yylval;
%}

/* DEFINICIONES */
BOOL ("true"|"false")
NUM [0-9]+
DEC [0-9]+"."[0-9]+
BLANK [ \r\t\n]+
ID [A-Za-z][A-Za-z0-9_]*
ACC ("D"|"C")

%%

{BLANK}     ;
{NUM}       { yylval = atoi(yytext); return NUMBER; }
{DEC}       { return NUMBER; }
{BOOL}      { return IDENTIFIER; }
{ID}        { return IDENTIFIER; }
{ACC}       { return IDENTIFIER; }
\n          { return '\n'; }
[ \t]       ;
.           { return yytext[0]; }

%%

int yywrap() { return 1; }
