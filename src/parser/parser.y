
%{
#include <stdio.h>
#include <string.h>
#include "../structures/parser.h"

int yylex();
int yyerror(const char *s);

	extern InstruccionList *list_tokens;
    extern ErrorList *list_errors;

%}

%define parse.error verbose

%code requires {
    typedef struct Instruccion Instruccion;
}

%locations

%union {
    char* sval;
    Instruccion* instr;
}

/* Tokens */

/* Valores */

%token <sval> STR CHR BOOLEAN ID OTHER NUM DEC
%token BREAK_LINE

/* Palabras reservadas */

%token <sval> INT STRING CHAR FLOAT BOOL FINAL

/* Tipo de los no-terminales que llevan valor */
%type program sentence
%type <instr> instruction


// precedencia menor a mayor
%left '+' '-' 
%left '*' '/' 

%%

%start program;


program
    : sentences { printf("Programa completo\n");
        
     };

sentences
    : sentences sentence
        {         }
    | /* empty */ {  };

sentence
    : instruction separator{
        InstruccionList_insert(list_tokens, $1);
    }
    | separator {};

separator
    : BREAK_LINE {}
    | ';' { /* skip */ };


instruction:

    //* int ID = 15
    INT ID '=' NUM {

        // ? Crear instrucción

        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->type = "DECLARATION";
        instP->id = $2;
        instP->dataType = strdup("int");
        instP->line = @2.first_line;
        instP->column = @2.first_column;

        // ? Crear expresión

        Expression* exp = (Expression*)malloc(sizeof(Expression));
        exp->type = strdup("int");
        exp->value = strdup($4);
        exp->line = @4.first_line;
        exp->column = @4.first_column;

        instP->value = exp;
        $$ = instP;
    }

    //* String ID = "hola"
    | STRING ID '=' STR {
        // ? Crear instrucción
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->type = "DECLARATION";
        instP->id = $2;
        instP->dataType = strdup("string");
        instP->line = @2.first_line;
        instP->column = @2.first_column;

        // ? Crear expresión
        Expression* exp = (Expression*)malloc(sizeof(Expression));
        exp->type = strdup("string");
        exp->value = strdup($4);
        exp->line = @4.first_line;
        exp->column = @4.first_column;

        instP->value = exp;
        $$ = instP;
    }

    //* float ID = 3.14
    | FLOAT ID '=' DEC {
        // ? Crear instrucción
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->type = "DECLARATION";
        instP->id = $2;
        instP->dataType = strdup("float");
        instP->line = @2.first_line;
        instP->column = @2.first_column;

        // ? Crear expresión
        Expression* exp = (Expression*)malloc(sizeof(Expression));
        exp->type = strdup("float");
        exp->value = strdup($4);
        exp->line = @4.first_line;
        exp->column = @4.first_column;

        instP->value = exp;
        $$ = instP;
    }

    ///* bool ID = true
    | BOOL ID '=' BOOLEAN {
        // ? Crear instrucción
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->type = "DECLARATION";
        instP->id = $2;
        instP->dataType = strdup("bool");
        instP->line = @2.first_line;
        instP->column = @2.first_column;

        // ? Crear expresión
        Expression* exp = (Expression*)malloc(sizeof(Expression));
        exp->type = strdup("bool");
        exp->value = strdup($4);
        exp->line = @4.first_line;
        exp->column = @4.first_column;

        instP->value = exp;
        $$ = instP;
    }

%%

int yyerror(const char *s)
{
    extern YYLTYPE yylloc;
    printf("Syntax Error: %s en línea %d, columna %d\n", s, yylloc.first_line, yylloc.first_column);
    Error *error = malloc(sizeof(Error));
    error->type = strdup("Sintáctico");
    error->message = strdup(s);
    error->line = yylloc.first_line;
    error->column = yylloc.first_column;
    insertError(list_errors, error);
    return 0;
}