
%{

#include <stdio.h>
#include <string.h>
#include "parser.tab.h"
#include <stdbool.h>
#include "../structures/parser.h"

void showError();

extern ErrorList *list_errors;

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
BLANK [ \r\t]+
BREAK_LINE \n

%%

";" return ';';

"=" return '=';

"int" return INT;

"float" return FLOAT;

"String" return STRING;

"boolean" return BOOL;

"char" return CHAR;

"final" return FINAL;

"true" {
    yylval.sval = strdup(yytext);
    return BOOLEAN;
}

"false" {
    yylval.sval = strdup(yytext);
    return BOOLEAN;
}

{NUM}      {
    yylval.sval = strdup(yytext);
    return NUM;
}

{DEC}      {
    yylval.sval = strdup(yytext);
    return DEC;
}

{ID}       {
    yylval.sval = strdup(yytext);
    return ID;
}

{STR} {
    yylval.sval = strdup(yytext);
    return STR;
}

{CHR} {
    yylval.sval = strdup(yytext);
    return CHR;
}

{BREAK_LINE}    {
    yycolumn = 1; // Reinicia la columna al inicio de cada línea
    return BREAK_LINE;
}

{BLANK}    { /* Ignorar espacios en blanco */ }

.       { showError(); printf("Error léxico: carácter inesperado '%s'\n", yytext); return(OTHER); }


%%


void showError(){
    printf("Other input");
    Error *error = malloc(sizeof(Error));
    error->type = strdup("Léxico");
    error->message = strdup("Error léxico: carácter inesperado");
    error->line = yylloc.first_line;
    error->column = yylloc.first_column;
    insertError(list_errors, error);
}