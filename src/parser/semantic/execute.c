#include "../structures/parser.h"
#include "semantic.h"
#include <string.h>

void semantic_analysis_execute(Instruccion *instruction, Context *context)
{

    // * Tabla de simbolos del contexto
    symbol_table *symbolTable_C = context->symbols_context;

    // ! Tabla de errores del contexto
    ErrorList *errorList_C = context->errors;

    if (strcmp(instruction->type, "DECLARATION") == 0)
    {

        // ! Ya existe el mismo id en el conxteo
        if (SearchID(symbolTable_C, instruction->id))
        {
            // Error: ID ya declarado en este contexto
            Error *new_error = (Error *)malloc(sizeof(Error));
            new_error->type = "Semantic";
            new_error->message = "ID ya declarado en este contexto";
            new_error->line = instruction->line;
            new_error->column = instruction->column;
            insertError(errorList_C, new_error);
            return;
        }

        // Insertar el nuevo símbolo en la tabla de símbolos del contexto actual
        symbol *new_symbol = (symbol *)calloc(1, sizeof(symbol));
        new_symbol->value = instruction->value->value;
        new_symbol->type = instruction->dataType;
        new_symbol->id = instruction->id;
        new_symbol->environment = context->nombre;
        new_symbol->line = &(instruction->line);
        new_symbol->column = &(instruction->column);

        Symbol_table_insert(symbolTable_C, new_symbol);
    }
    else if (strcmp(instruction->type, "ASSIGNMENT") == 0)
    {
        // código para asignación
    }
    else
    {
        // otro caso
    }
}
