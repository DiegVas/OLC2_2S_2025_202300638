#include "../structures/parser.h"
#include "semantic.h"
#include <string.h>

extern symbol_table *SymbolTable_General;

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
        if (strcmp(instruction->symbolType, "LIST") == 0)
        {
            fprintf(stderr, "Declaración de lista detectada para ID: %s\n", instruction->id);
            List *list_values = instruction->arrayValues->values;
            list_values = evaluate_list(list_values, context);
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

                if (strcmp(sym_to_update->type, "CONSTANT") == 0)
                {
                    // Error: No se puede modificar una constante
                    Error *new_error = (Error *)malloc(sizeof(Error));
                    new_error->type = "Semantic";
                    new_error->environment = context->nombre;
                    new_error->message = "No se puede modificar una constante";
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

        symbol *if_condition_value = evaluate_expression(condition, context);
        if (strcmp(if_condition_value->dataType, "UNDEFINED") == 0)
        {
            Error *new_error = (Error *)malloc(sizeof(Error));
            new_error->type = "Semantic";
            new_error->environment = context->nombre;
            new_error->message = if_condition_value->value;
            new_error->line = instruction->line;
            new_error->column = instruction->column;
            insertError(errorList_C, new_error);
            return;
        }

        bool condition_value = boolean_value(if_condition_value->value);

        Context *ctx_if = malloc(sizeof(Context));
        ctx_if->after = context;
        ctx_if->symbols_context = Symbol_table_create();
        ctx_if->nombre = "If";

        if (condition_value)
        {
            InstruccionNode *curr = if_block->head;
            while (curr)
            {
                semantic_analysis_execute(curr->instr, ctx_if);
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
                        semantic_analysis_execute(curr->instr, ctx_if);
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
                    semantic_analysis_execute(curr->instr, ctx_if);
                    curr = curr->next;
                }
            }
        }
        Symbol_table_insertContext(SymbolTable_General, ctx_if->symbols_context);
        break;
    }
    case SWITCH_STATEMENT:
    {
        char *switch_id = instruction->switchData->condition;

        Expression *switch_id_value = (Expression *)calloc(1, sizeof(Expression));
        switch_id_value->type = "ID";
        switch_id_value->value = switch_id;

        Context *ctx_switch = malloc(sizeof(Context));
        ctx_switch->after = context;
        ctx_switch->symbols_context = Symbol_table_create();
        ctx_switch->nombre = "Switch";

        symbol *switch_value = evaluate_expression(switch_id_value, context);

        if (strcmp(switch_value->dataType, "UNDEFINED") == 0)
        {
            // Error: ID no declarado
            Error *new_error = (Error *)malloc(sizeof(Error));
            new_error->type = "Semantic";
            new_error->environment = context->nombre;
            new_error->message = "ID no declarado en switch";
            new_error->line = instruction->line;
            new_error->column = instruction->column;
            insertError(errorList_C, new_error);
            return;
        }

        bool case_executed = false;

        Expression *exp_condition = (Expression *)calloc(1, sizeof(Expression));
        exp_condition->type = "EQUALS";
        exp_condition->value = strdup("==");
        exp_condition->left = switch_id_value;

        CaseNode *curr_case = instruction->switchData->cases ? instruction->switchData->cases->head : NULL;
        while (curr_case && !case_executed)
        {

            exp_condition->right = curr_case->caseData->condition;

            symbol *case_condition = evaluate_expression(exp_condition, context);

            bool case_condition_bool = boolean_value(case_condition->value);

            if (case_condition_bool)
            {

                ctx_switch->nombre = "Case";

                InstruccionNode *curr_instr = curr_case->caseData->block->head;
                while (curr_instr)
                {
                    semantic_analysis_execute(curr_instr->instr, ctx_switch);
                    curr_instr = curr_instr->next;
                }
                case_executed = true;
            }
            curr_case = curr_case->next;
        }

        if (!case_executed && instruction->switchData->defaultCase)
        {
            ctx_switch->nombre = "Default";

            InstruccionNode *curr_instr = instruction->switchData->defaultCase->head;
            while (curr_instr)
            {
                semantic_analysis_execute(curr_instr->instr, ctx_switch);
                curr_instr = curr_instr->next;
            }
        }
        Symbol_table_insertContext(SymbolTable_General, ctx_switch->symbols_context);
        break;
    }
    case WHILE_STATEMENT:
    {
        Expression *condition = instruction->whileData->condition;
        InstruccionList *while_block = instruction->whileData->block;

        Context *ctx_while = calloc(1, sizeof(Context));
        ctx_while->after = context;
        ctx_while->symbols_context = Symbol_table_create();
        ctx_while->nombre = "While";
        fprintf(stderr, "Ejecutando While...\n");
        symbol *evaluated_while = evaluate_expression(condition, ctx_while);
        if (strcmp(evaluated_while->dataType, "UNDEFINED") == 0)
        {
            Error *new_error = (Error *)malloc(sizeof(Error));
            new_error->type = "Semantic";
            new_error->environment = context->nombre;
            new_error->message = evaluated_while->value;
            new_error->line = instruction->line;
            new_error->column = instruction->column;
            insertError(errorList_C, new_error);
            return;
        }
        bool condition_value = boolean_value(evaluated_while->value);

        while (condition_value)
        {
            InstruccionNode *curr = while_block->head;
            while (curr)
            {
                semantic_analysis_execute(curr->instr, ctx_while);
                if (ctx_while->break_instruction)
                    break;

                if (ctx_while->continue_instruction)
                {
                    ctx_while->continue_instruction = false;
                    break;
                }

                curr = curr->next;
            }

            if (ctx_while->break_instruction)
                break;

            condition_value = boolean_value(evaluate_expression(condition, context)->value);
        }
        Symbol_table_insertContext(SymbolTable_General, ctx_while->symbols_context);
        break;
    }
    case FOR_STATEMENT:
    {
        Instruccion *init = instruction->forData->init;
        Expression *condition = instruction->forData->condition;
        Instruccion *update = instruction->forData->update;
        InstruccionList *for_block = instruction->forData->block;

        Context *ctx_for = calloc(1, sizeof(Context));
        ctx_for->after = context;
        ctx_for->symbols_context = Symbol_table_create();
        ctx_for->nombre = "For";

        semantic_analysis_execute(init, ctx_for);

        symbol *evaluated_for = evaluate_expression(condition, ctx_for);
        bool condition_value = boolean_value(evaluated_for->value);

        fprintf(stderr, "Condición inicial del For: %d\n", condition_value);

        while (condition_value)
        {
            InstruccionNode *curr = for_block->head;
            while (curr)
            {
                semantic_analysis_execute(curr->instr, ctx_for);

                if (ctx_for->break_instruction)
                    break;

                if (ctx_for->continue_instruction)
                {
                    ctx_for->continue_instruction = false;
                    break;
                }

                curr = curr->next;
            }

            // Ejecutar actualización

            if (ctx_for->break_instruction)
                break;

            fprintf(stderr, "Ejecutando actualización del For...\n");
            fprintf(stderr, "Antes de la actualización, condición: %s\n", update->value->value);
            semantic_analysis_execute(update, ctx_for);

            condition_value = boolean_value(evaluate_expression(condition, ctx_for)->value);
            fprintf(stderr, "nuevo valor de condición: %d\n", condition_value);
        }
        Symbol_table_insertContext(SymbolTable_General, ctx_for->symbols_context);
        break;
    }
    case BREAK_STATEMENT:
    {
        // Manejo de la instrucción BREAK
        Context *ctx = context;
        bool found_loop = false;
        while (ctx)
        {
            if (strcmp(ctx->nombre, "For") == 0 || strcmp(ctx->nombre, "While") == 0 || strcmp(ctx->nombre, "Switch") == 0)
            {
                ctx->break_instruction = true;
                found_loop = true;
                break;
            }
            ctx = ctx->after;
        }

        if (!found_loop)
        {
            // Error: BREAK fuera de un contexto de bucle o switch
            Error *new_error = (Error *)malloc(sizeof(Error));
            new_error->type = "Semantic";
            new_error->environment = context->nombre;
            new_error->message = "BREAK fuera de un contexto de bucle o switch";
            new_error->line = instruction->line;
            new_error->column = instruction->column;
            insertError(errorList_C, new_error);
            return;
        }

        break;
    }
    case CONTINUE_STATEMENT:
    {
        // Manejo de la instrucción CONTINUE
        Context *ctx = context;
        bool found_loop = false;
        while (ctx)
        {
            if (strcmp(ctx->nombre, "For") == 0 || strcmp(ctx->nombre, "While") == 0)
            {

                ctx->continue_instruction = true;
                found_loop = true;
                break;
            }
            ctx = ctx->after;
        }

        if (!found_loop)
        {
            // Error: CONTINUE fuera de un contexto de bucle
            Error *new_error = (Error *)malloc(sizeof(Error));
            new_error->type = "Semantic";
            new_error->environment = context->nombre;
            new_error->message = "CONTINUE fuera de un contexto de bucle";
            new_error->line = instruction->line;
            new_error->column = instruction->column;
            insertError(errorList_C, new_error);
            return;
        }

        break;
    }

    default:
        fprintf(stderr, "Instrucción no manejada en análisis semántico: %s\n", instruction->InstType);
        break;
    }
}
