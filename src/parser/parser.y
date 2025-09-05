
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
    typedef struct Expression Expression;
}

%locations

%union {
    char* sval;
    Instruccion* instr;
    Expression* expr;
}

/* Tokens */

/* Valores */

%token <sval> STR CHR BOOLEAN ID OTHER NUM DEC DECF
%token BREAK_LINE

/* Palabras reservadas */

%token <sval> INT STRING CHAR FLOAT DOUBLE BOOL FINAL PRINTLN

/* Simboloes dobles o mas */

%token LEFT_SHIFT RIGHT_SHIFT
%token PLUS_ASSIGN MINUS_ASSIGN MULT_ASSIGN DIV_ASSIGN MOD_ASSIGN 
%token AND_ASSIGN OR_ASSIGN XOR_ASSIGN LEFT_SHIFT_ASSIGN RIGHT_SHIFT_ASSIGN

/* Tipo de los no-terminales que llevan valor */
%type program sentence
%type <instr> instruction
%type <instr> declaration assignment
%type <sval> primitive_types
%type <expr> primitive_values
%type <expr> expression;
%type <instr> assignment_expression;


// precedencia menor a mayor
%left '+' '-' 
%left '*' '/' 
%left '(' ')'

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

    declaration {
        $1->InstType = "DECLARATION";
        $1->line = @1.first_line;
        $$ = $1;
    }
    | PRINTLN '(' expression ')' {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "PRINTLN";
        instP->value = $3;
        instP->line = @1.first_line;
        $$ = instP;
    }
    | assignment {
        $1->InstType = "ASSIGNMENT";
        $1->line = @1.first_line;
        $$ = $1;
    }
    ;

assignment:
    ID '=' expression {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = $1;
        instP->value = $3;
        instP->column = @1.first_column;
        $$ = instP; }
    //* ID += expression
    | assignment_expression PLUS_ASSIGN expression {
        $1->value->type = "SUM";
        $1->value->value = strdup("+");
        $1->value->right = $3;
        $$ = $1; }
    //* ID -= expression
    | assignment_expression MINUS_ASSIGN expression {
        $1->value->type = "SUBTRACT";
        $1->value->value = strdup("-");
        $1->value->right = $3;
        $$ = $1; }
    //* ID *= expression
    | assignment_expression MULT_ASSIGN expression {
        $1->value->type = "MULTIPLICATION";
        $1->value->value = strdup("*");
        $1->value->right = $3;
        $$ = $1; }
    //* ID /= expression
    | assignment_expression DIV_ASSIGN expression {
        $1->value->type = "DIVIDE";
        $1->value->value = strdup("/");
        $1->value->right = $3;
        $$ = $1; }
    //* ID %= expression
    | assignment_expression MOD_ASSIGN expression {
        $1->value->type = "MODULO";
        $1->value->value = strdup("%");
        $1->value->right = $3;
        $$ = $1; }
    //* ID &= expression
    | assignment_expression AND_ASSIGN expression {
        $1->value->type = "BITWISE_AND";
        $1->value->value = strdup("&");
        $1->value->right = $3;
        $$ = $1; }
    //* ID |= expression
    | assignment_expression OR_ASSIGN expression {
        $1->value->type = "BITWISE_OR";
        $1->value->value = strdup("|");
        $1->value->right = $3;
        $$ = $1; }
    //* ID ^= expression
    | assignment_expression XOR_ASSIGN expression {
        $1->value->type = "BITWISE_XOR";
        $1->value->value = strdup("^");
        $1->value->right = $3;
        $$ = $1; }
    //* ID <<= expression
    | assignment_expression LEFT_SHIFT_ASSIGN expression {
        $1->value->type = "BITWISE_LEFT_SHIFT";
        $1->value->value = strdup("<<");
        $1->value->right = $3;
        $$ = $1; }
    //* ID >>= expression
    | assignment_expression RIGHT_SHIFT_ASSIGN expression {
        $1->value->type = "BITWISE_RIGHT_SHIFT";
        $1->value->value = strdup(">>");
        $1->value->right = $3;
        $$ = $1; };

assignment_expression: 
    ID {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = $1;
        instP->column = @1.first_column;

        instP->value = (Expression*)calloc(1, sizeof(Expression));
        instP->value->left = (Expression*)calloc(1, sizeof(Expression));
        instP->value->left->type = "ID";
        instP->value->left->value = strdup($1);
        $$ = instP;
        };


declaration: 
    //* int ID = 15
    primitive_types ID '=' expression {

        // ? Crear instrucción

        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = $2;
        instP->type = $1;
        instP->column = @2.first_column;
        instP->symbolType = "VARIABLE";
        instP->value = $4;
        $$ = instP; }  
    // * int x;
    | primitive_types ID {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = $2;
        instP->type = $1;
        instP->column = @2.first_column;
        instP->symbolType = "VARIABLE";

        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = $1;
        exp->value = strdup("UNDEFINED");

        instP->value = exp;
        $$ = instP; }
    // * final int ID = 15;
    | FINAL primitive_types ID '=' expression {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = $3;
        instP->type = $2;
        instP->column = @3.first_column;
        instP->symbolType = "CONSTANT";
        instP->value = $5;
        $$ = instP; };



primitive_types:
    INT { $$ = strdup("INTEGER"); }
    | STRING { $$ = strdup("STRING"); }
    | DOUBLE { $$ = strdup("DOUBLE"); }
    | FLOAT { $$ = strdup("FLOAT"); }
    | BOOL { $$ = strdup("BOOLEAN"); }
    | CHAR { $$ = strdup("CHARACTER"); };

primitive_values:
    NUM { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("INTEGER");
        exp->value = strdup($1);

        $$ = exp; }
    | STR { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("STRING");
        exp->value = strdup($1);

        $$ = exp; }
    | DEC { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("DOUBLE");
        exp->value = strdup($1);

        $$ = exp; }
    | DECF { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("FLOAT");
        exp->value = strdup($1);

        $$ = exp; }
    | BOOLEAN { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("BOOLEAN");
        exp->value = strdup($1);

        $$ = exp; }
    | CHR { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("CHARACTER");
        exp->value = strdup($1);
        $$ = exp; }



expression:
      primitive_values { $$ = $1; }
    | ID {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "ID";
        exp->value = strdup($1);
        $$ = exp;
        }
    | '-' expression %prec '-' {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "NEGATIVE";
        exp->value = strdup("-");
        exp->left = $2;
        $$ = exp; }
    | expression '+' expression {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "SUM";
        exp->value = strdup("+");
        exp->left = $1;
        exp->right = $3;
        $$ = exp; }
    | expression '-' expression {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "SUBTRACT";
        exp->value = strdup("-");
        exp->left = $1;
        exp->right = $3;
        $$ = exp; }
    | expression '*' expression {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "MULTIPLICATION";
        exp->value = strdup("*");
        exp->left = $1;
        exp->right = $3;
        $$ = exp; }
    | expression '/' expression {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "DIVIDE";
        exp->value = strdup("/");
        exp->left = $1;
        exp->right = $3;
        $$ = exp; }
    | expression '%' expression {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "MODULO";
        exp->value = strdup("%");
        exp->left = $1;
        exp->right = $3;
        $$ = exp; }
    | '(' expression ')' { $$ = $2; }
    | '(' primitive_types ')' expression {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "CASTING";
        exp->value = $2;
        exp->left = $4;
        $$ = exp; }
        
    | expression '&' expression {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_AND";
        exp->value = strdup("&");
        exp->left = $1;
        exp->right = $3;
        $$ = exp; }
    | expression '|' expression {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_OR";
        exp->value = strdup("|");
        exp->left = $1;
        exp->right = $3;
        $$ = exp; }
    | expression '^' expression {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_XOR";
        exp->value = strdup("^");
        exp->left = $1;
        exp->right = $3;
        $$ = exp; }
    //* expression << expression
    | expression LEFT_SHIFT expression {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_LEFT_SHIFT";
        exp->value = strdup("<<");
        exp->left = $1;
        exp->right = $3;
        $$ = exp; }
    
    //* expression >> expression
    | expression RIGHT_SHIFT expression {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_RIGHT_SHIFT";
        exp->value = strdup(">>");
        exp->left = $1;
        exp->right = $3;
        $$ = exp; };

%%

int yyerror(const char *s)
{
    extern YYLTYPE yylloc;
    printf("Syntax Error: %s en línea %d, columna %d\n", s, yylloc.first_line, yylloc.first_column);
    Error *error = malloc(sizeof(Error));
    error->type = strdup("Sintáctico");
    error->environment = strdup("-");
    error->message = strdup(s);
    error->line = yylloc.first_line;
    error->column = yylloc.first_column;
    insertError(list_errors, error);
    return 0;
}