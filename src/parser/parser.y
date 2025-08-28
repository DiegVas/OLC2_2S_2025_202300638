
%{
#include <stdio.h>
#include "../structures/token_list.h"

int yylex();
int yyerror(char *s);

	extern InstruccionList *list_tokens;


%}

%locations

%union {
    int ival;
    float fval;
    char* sval;
}

/* Tokens */

/* Valores */

%token <sval> STR CHR BOOLEAN ID OTHER
%token <ival> NUM
%token <fval> DEC

/* Palabras reservadas */

%token <sval> INT STRING CHAR FLOAT BOOL


/* SIMBOLOS */
%token <sval> EQUAL

%%

prog:
	lines
;

lines:
	  /* vacío */
	| line lines
;

line:
    BOOL { printf("Linea válida: %s\n", $1);}
;



%%

int yyerror(char *s)
{
	printf("Syntax Error on line %s\n", s);
	return 0;
}
