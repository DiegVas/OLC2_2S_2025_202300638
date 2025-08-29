#include "../structures/parser.h"
#include "semantic.h"

Context *contextGlobal = NULL;

void semantic_analysis()
{

    extern InstruccionList *list_tokens;
    extern ErrorList *list_errors;

    contextGlobal = malloc(sizeof(Context));
    contextGlobal->nombre = "Global";

    symbol_table *global_symbol_table = Symbol_table_create();
    contextGlobal->symbols_context = global_symbol_table;

    // Implementación del análisis semántico

    InstruccionNode *curr = list_tokens->head;

    while (curr)
    {
        semantic_analysis_execute(curr->instr, contextGlobal);
        curr = curr->next;
    }
}
