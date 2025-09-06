#include "../structures/parser.h"
#include "semantic.h"
#include <string.h>

void semantic_analysis_execute(Instruccion *instruction, Context *context)
{

    // * Tabla de simbolos del contexto
    symbol_table *symbolTable_C = context->symbols_context;

    // ! Tabla de errores del contexto
    ErrorList *errorList_C = context->errors;

    ExecuteType instruction_type = get_instruction_type(instruction->InstType);

    switch (instruction_type)
    {
    case DECLARATION:
    {

        // ! Ya existe el mismo id en el conxteo
        if (SearchID(symbolTable_C, instruction->id))
        {
            // Error: ID ya declarado en este contexto
            Error *new_error = (Error *)malloc(sizeof(Error));
            new_error->environment = strdup(context->nombre);
            new_error->type = "Semantic";
            new_error->message = "ID ya declarado en este contexto";
            new_error->line = instruction->line;
            new_error->column = instruction->column;
            insertError(errorList_C, new_error);
            return;
        }

        symbol *evaluated_value = evaluate_expression(instruction->value, context);

        evaluated_value = apply_casting_auto(evaluated_value, instruction->type);

        if (strcmp(evaluated_value->dataType, "UNDEFINED") == 0)
        {
            // Error: Evaluación de expresión fallida
            Error *new_error = (Error *)malloc(sizeof(Error));
            new_error->type = "Semantic";
            new_error->environment = context->nombre;
            new_error->message = evaluated_value->value;
            new_error->line = instruction->line;
            new_error->column = instruction->column;
            insertError(errorList_C, new_error);
            return;
        }

        if (strcmp(evaluated_value->dataType, instruction->type) != 0)
        {

            // Error: Tipo de dato no coincide
            Error *new_error = (Error *)malloc(sizeof(Error));
            new_error->type = "Semantic";
            char buffer[256];
            snprintf(buffer, sizeof(buffer), "Tipo de dato no coincide: %s vs %s", evaluated_value->dataType, instruction->type);
            new_error->message = strdup(buffer);
            new_error->environment = strdup(context->nombre);
            new_error->line = instruction->line;
            new_error->column = instruction->column;
            insertError(errorList_C, new_error);
            return;
        }

        // Insertar el nuevo símbolo en la tabla de símbolos del contexto actual
        symbol *new_symbol = (symbol *)calloc(1, sizeof(symbol));
        new_symbol->value = evaluated_value->value;
        new_symbol->dataType = instruction->type;
        new_symbol->type = instruction->symbolType;
        new_symbol->id = instruction->id;
        new_symbol->environment = context->nombre;
        new_symbol->line = &(instruction->line);
        new_symbol->column = &(instruction->column);

        fprintf(stderr, "Nuevo símbolo: %s, Tipo: %s, Valor: %s\n",
                new_symbol->id, new_symbol->dataType, new_symbol->value);

        Symbol_table_insert(symbolTable_C, new_symbol);
        break;
    }
    case ASSIGNMENT:
    {

        symbol *evaluated_assign = evaluate_expression(instruction->value, context);

        if (strcmp(evaluated_assign->dataType, "UNDEFINED") == 0)
        {
            // Error: Evaluación de expresión fallida
            Error *new_error = (Error *)calloc(1, sizeof(Error));
            new_error->type = "Semantic";
            new_error->environment = context->nombre;
            new_error->message = evaluated_assign->value;
            new_error->line = instruction->line;
            new_error->column = instruction->column;
            insertError(errorList_C, new_error);
            return;
        }

        Context *ctx = context;
        while (ctx)
        {
            if (SearchID(ctx->symbols_context, instruction->id))
            {
                symbol *sym_to_update = SearchSymbol(ctx->symbols_context, instruction->id);
                symbol *evaluated_value = apply_casting_auto(evaluated_assign, sym_to_update->dataType);

                if (strcmp(sym_to_update->dataType, evaluated_value->dataType) != 0)
                {
                    // Error: Tipo de dato no coincide
                    Error *new_error = (Error *)malloc(sizeof(Error));
                    new_error->type = "Semantic";
                    char buffer[256];
                    snprintf(buffer, sizeof(buffer), "Tipo de dato no coincide en asignación: %s vs %s", sym_to_update->dataType, evaluated_assign->type);
                    new_error->message = strdup(buffer);
                    new_error->environment = strdup(context->nombre);
                    new_error->line = instruction->line;
                    new_error->column = instruction->column;
                    insertError(errorList_C, new_error);
                    return;
                }

                sym_to_update->value = evaluated_assign->value;
                return;
            }
            ctx = ctx->after;
        }

        // Error: ID no declarado
        Error *new_error = (Error *)malloc(sizeof(Error));
        new_error->type = "Semantic";
        new_error->environment = context->nombre;
        new_error->message = "ID no declarado";
        new_error->line = instruction->line;
        new_error->column = instruction->column;
        insertError(errorList_C, new_error);
        return;

        break;
    }
    case EXP_PRINTLN:
    {
        symbol *print_value = evaluate_expression(instruction->value, context);

        if (strcmp(print_value->dataType, "UNDEFINED") == 0)
        {
            // Error: Evaluación de expresión fallida
            Error *new_error = (Error *)malloc(sizeof(Error));
            new_error->type = "Semantic";
            new_error->environment = context->nombre;
            new_error->message = print_value->value;
            new_error->line = instruction->line;
            new_error->column = instruction->column;
            insertError(errorList_C, new_error);
            return;
        }

        // Si es string, procesar secuencias de escape
        if (strcmp(print_value->dataType, "STRING") == 0)
        {
            char *processed_string = process_escape_sequences(print_value->value);
            printf("%s\n", processed_string);
            free(processed_string);
        }
        else
        {
            printf("%s\n", print_value->value);
        }
        break;
    }
    case IF_STATEMENT:
    {
        Expression *condition = instruction->ifData->condition;
        InstruccionList *if_block = instruction->ifData->block;
        InstruccionList *else_block = instruction->ifData->elseBlock;
        IfNodeList *else_ifs = instruction->ifData->elseIfs;

        bool condition_value = boolean_value(evaluate_expression(condition, context)->value);

        if (condition_value)
        {
            InstruccionNode *curr = if_block->head;
            while (curr)
            {
                semantic_analysis_execute(curr->instr, context);
                curr = curr->next;
            }
        }
        else
        {
            bool executed_elseif = false;
            IfNodeList *curr_elseif = else_ifs;
            IfNode *curr_node = curr_elseif ? curr_elseif->head : NULL;
            while (curr_node && !executed_elseif)
            {
                bool elseif_condition_value = boolean_value(evaluate_expression(curr_node->IfData->condition, context)->value);
                if (elseif_condition_value)
                {
                    InstruccionNode *curr = curr_node->IfData->block->head;
                    while (curr)
                    {
                        semantic_analysis_execute(curr->instr, context);
                        curr = curr->next;
                    }
                    executed_elseif = true;
                }
                curr_node = curr_node->next;
            }

            if (!executed_elseif && else_block)
            {
                InstruccionNode *curr = else_block->head;
                while (curr)
                {
                    semantic_analysis_execute(curr->instr, context);
                    curr = curr->next;
                }
            }
        }
        break;
    }
    default:
        fprintf(stderr, "Instrucción no manejada en análisis semántico: %s\n", instruction->InstType);
        break;
    }
}
