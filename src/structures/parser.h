#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#ifndef TOKEN_LIST_H
#define TOKEN_LIST_H

//* Tabla de simbolos

typedef struct symbol
{
    //* El tipo de dato que es
    char *dataType;

    //* Variables, constantes, etc.
    char *type;
    char *subType;
    char *environment;
    char *value;
    char *id;

    int *line;
    int *column;
} symbol;

typedef struct symbol_node
{
    symbol *data;
    struct symbol_node *next;
} symbol_node;

typedef struct symbol_table
{
    symbol_node *head;
} symbol_table;

//* Contexto

typedef struct Context
{
    char *nombre;
    struct Context *after;
    struct symbol_table *symbols_context;
    struct ErrorList *errors;
    bool *continue_instruction;
    bool *break_instruction;
    char *return_type;
    char *return_value;

} Context;

// * Tabla de errores

typedef struct Error
{
    char *type;
    char *environment;
    char *message;
    int line;
    int column;
} Error;

typedef struct ErrorNode
{
    Error *Error;
    struct ErrorNode *next;
} ErrorNode;

typedef struct ErrorList
{
    ErrorNode *head;
} ErrorList;

// * Manejo de Tokens

typedef struct Expression
{
    char *type;
    char *value;
    int line;
    int column;
    struct Expression *left;
    struct Expression *right;
} Expression;

typedef struct Instruccion
{
    char *InstType;
    char *symbolType;
    char *type;
    char *id;
    int line;
    int column;
    Expression *value;
} Instruccion;

typedef struct InstruccionNode
{
    Instruccion *instr;
    struct InstruccionNode *next;
} InstruccionNode;

typedef struct InstruccionList
{
    InstruccionNode *head;
} InstruccionList;

// * --- Estructura ASTNode y lista de hijos ---

typedef struct ASTNode ASTNode;

typedef struct ASTNodeList
{
    ASTNode *node;
    struct ASTNodeList *next;
} ASTNodeList;

struct ASTNode
{
    char *id;
    char *label;
    ASTNodeList *children;
};

//* Prototipos de funciones
InstruccionList *InstruccionList_create();
void InstruccionList_print(InstruccionList *list);
void InstruccionList_insert(InstruccionList *list, Instruccion *instr);
void InstruccionList_destroy(InstruccionList *list);

void ASTNode_addChild(ASTNode *parent, ASTNode *child);
void ASTNode_destroy(ASTNode *node);

ErrorList *createErrorList();
void ErrorList_destroy(ErrorList *list);
void insertError(ErrorList *list, Error *error);

symbol_table *Symbol_table_create();
void Symbol_table_destroy(symbol_table *table);
void Symbol_table_insert(symbol_table *table, symbol *sym);
bool SearchID(symbol_table *table, char *id);
symbol *SearchSymbol(symbol_table *table, char *id);

#endif // PARSER_H