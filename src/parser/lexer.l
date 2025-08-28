
%{

#include <stdio.h>
#include <string.h>
#include "parser.tab.h"
#include <stdbool.h>

void showError();

int yycolumn = 1;


/* Se ejecuta antes de cada accion, actualiza yylloc y columna */
#define YY_USER_ACTION                                   \
    yylloc.first_line   = yylineno;                      \
    yylloc.first_column = yycolumn;                      \
    yylloc.last_line    = yylineno;                      \
    yylloc.last_column  = yycolumn + yyleng - 1;         \
    yycolumn           += yyleng;


%}

%option noyywrap yylineno


/* Definiciones */

NUM [0-9]+
DEC [0-9]+"."[0-9]+
ID [A-Za-z][A-Za-z0-9_]*
STR \"([^\\"]|\\.)*\"
CHR \'([^\\']|\\.)*\'
BLANK [ \r\t\n]+

%%

= {
    printf("Token: %s, Tipo: EQUAL, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    return EQUAL;
}

int {
    printf("Token: %s, Tipo: INT, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    return INT;
}

float {
    printf("Token: %s, Tipo: FLOAT, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    return FLOAT;
}

String {
    printf("Token: %s, Tipo: STRING, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    return STRING;
}

bool {
    printf("Token: %s, Tipo: BOOL, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    return BOOL;
}

char {
    printf("Token: %s, Tipo: CHAR, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    return CHAR;
}

true     {  
    printf("Token: %s, Tipo: BOOL, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    return BOOLEAN;
        }

false    {
       
    printf("Token: %s, Tipo: BOOLEAN, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    return BOOLEAN;
        }

int {
    printf("Token: %s, Tipo: INT, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    return INT;
}

{NUM}      {
    printf("Token: %s, Tipo: NUM, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    yylval.ival = atoi(yytext);
    return NUM;
        }

{DEC}      {
    printf("Token: %s, Tipo: DEC, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    yylval.fval = atof(yytext);
    return DEC;
}

{ID}       {
    printf("Token: %s, Tipo: ID, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    yylval.sval = strdup(yytext);
    return ID;
}

{STR} {
    printf("Token: %s, Tipo: STR, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    yylval.sval = strdup(yytext);
    return STR;
}

{CHR} {
    printf("Token: %s, Tipo: CHR, Línea: %d, Columna: %d\n", yytext, yylineno, yycolumn);
    yylval.sval = strdup(yytext);
    return CHR;
}

";"      		   {}

{BLANK}    { /* Ignorar espacios en blanco */ }

.       { showError(); printf("Error léxico: carácter inesperado '%s'\n", yytext); return(OTHER); }


%%


void showError(){
    printf("Other input");
}