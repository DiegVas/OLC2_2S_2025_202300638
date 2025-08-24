%{
#include "parser.tab.h"
extern int yylval;
%}

%%
[0-9]+      { yylval = atoi(yytext); return NUMBER; }
[a-zA-Z]+   { return IDENTIFIER; }
\n          { return '\n'; }
[ \t]      ;
.           { return yytext[0]; }
%%

int yywrap() { return 1; }
