%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
int yylval;
int yyerror(const char *s);
%}

%token NUMBER IDENTIFIER

%%
input:
    /* vacío */
    | input line
    ;

line:
    expr '\n'   { printf("Resultado: %d\n", $1); }
    ;

expr:
    NUMBER      { $$ = yylval; }
    | expr '+' expr { $$ = $1 + $3; }
    | expr '-' expr { $$ = $1 - $3; }
    ;
%%

