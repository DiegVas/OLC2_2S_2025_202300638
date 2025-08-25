#include "UI.h"

// Función para crear el panel de reportes con pestañas
GtkWidget* create_reports_panel() {
    GtkWidget *notebook = gtk_notebook_new();
    
    // Pestaña AST
    GtkWidget *ast_scrolled = gtk_scrolled_window_new(NULL, NULL);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(ast_scrolled),
                                  GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
    
    GtkWidget *ast_view = gtk_text_view_new();
    gtk_text_view_set_monospace(GTK_TEXT_VIEW(ast_view), TRUE);
    gtk_text_view_set_editable(GTK_TEXT_VIEW(ast_view), FALSE);
    
    // Agregar padding al AST
    gtk_text_view_set_left_margin(GTK_TEXT_VIEW(ast_view), 15);
    gtk_text_view_set_right_margin(GTK_TEXT_VIEW(ast_view), 15);
    gtk_text_view_set_top_margin(GTK_TEXT_VIEW(ast_view), 15);
    gtk_text_view_set_bottom_margin(GTK_TEXT_VIEW(ast_view), 15);
    
    // Aplicar fondo más oscuro al AST
    GdkRGBA ast_bg_color, ast_fg_color;
    gdk_rgba_parse(&ast_bg_color, "#0A0A0A");
    gdk_rgba_parse(&ast_fg_color, "#ffffff");
    gtk_widget_override_background_color(ast_view, GTK_STATE_FLAG_NORMAL, &ast_bg_color);
    gtk_widget_override_color(ast_view, GTK_STATE_FLAG_NORMAL, &ast_fg_color);
    
    GtkTextBuffer *ast_buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(ast_view));
    gtk_text_buffer_set_text(ast_buffer,
        "Abstract Syntax Tree (AST)\n"
        "=========================\n\n"
        "Program\n"
        "├── ClassDeclaration: Main\n"
        "│   └── MethodDeclaration: main\n"
        "│       └── Block\n"
        "│           ├── VariableDeclaration: int x = 10\n"
        "│           ├── VariableDeclaration: float y = 3.14f\n"
        "│           ├── VariableDeclaration: String message = \"Hello, JavaLang!\"\n"
        "│           ├── MethodCall: System.out.println(message)\n"
        "│           ├── MethodCall: System.out.println(\"x = \" + x)\n"
        "│           ├── IfStatement\n"
        "│           │   ├── Condition: x > 5\n"
        "│           │   └── Block\n"
        "│           │       └── MethodCall: System.out.println(\"x is greater than 5\")\n"
        "│           ├── VariableDeclaration: int[] numbers = {1, 2, 3, 4, 5}\n"
        "│           └── ForLoop\n"
        "│               ├── Init: int i = 0\n"
        "│               ├── Condition: i < numbers.length\n"
        "│               ├── Increment: i++\n"
        "│               └── Block\n"
        "│                   └── MethodCall: System.out.println(\"Number: \" + numbers[i])", -1);
    
    gtk_container_add(GTK_CONTAINER(ast_scrolled), ast_view);
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), ast_scrolled, gtk_label_new("AST"));
    
    // Pestaña Tabla de Símbolos
    GtkWidget *symbols_scrolled = gtk_scrolled_window_new(NULL, NULL);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(symbols_scrolled),
                                  GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
    
    // Crear contenedor con padding para la tabla de símbolos
    GtkWidget *symbols_container = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_container_set_border_width(GTK_CONTAINER(symbols_container), 15);
    
    // Aplicar fondo más oscuro al contenedor de símbolos
    GdkRGBA symbols_container_bg;
    gdk_rgba_parse(&symbols_container_bg, "#0A0A0A");
    gtk_widget_override_background_color(symbols_container, GTK_STATE_FLAG_NORMAL, &symbols_container_bg);
    
    GtkListStore *symbols_store = gtk_list_store_new(6, G_TYPE_STRING, G_TYPE_STRING, 
                                                    G_TYPE_STRING, G_TYPE_STRING, 
                                                    G_TYPE_INT, G_TYPE_INT);
    GtkWidget *symbols_tree = gtk_tree_view_new_with_model(GTK_TREE_MODEL(symbols_store));
    
    // Columnas para la tabla de símbolos
    const char *symbols_columns[] = {"ID", "Tipo símbolo", "Tipo dato", "Ámbito", "Línea", "Columna"};
    for (int i = 0; i < 6; i++) {
        GtkCellRenderer *renderer = gtk_cell_renderer_text_new();
        GtkTreeViewColumn *column = gtk_tree_view_column_new_with_attributes(
            symbols_columns[i], renderer, "text", i, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(symbols_tree), column);
    }
    
    // Datos de ejemplo
    GtkTreeIter iter;
    gtk_list_store_append(symbols_store, &iter);
    gtk_list_store_set(symbols_store, &iter, 0, "x", 1, "Variable", 2, "int", 3, "main", 4, 4, 5, 13, -1);
    
    gtk_list_store_append(symbols_store, &iter);
    gtk_list_store_set(symbols_store, &iter, 0, "y", 1, "Variable", 2, "float", 3, "main", 4, 5, 5, 15, -1);
    
    gtk_list_store_append(symbols_store, &iter);
    gtk_list_store_set(symbols_store, &iter, 0, "message", 1, "Variable", 2, "String", 3, "main", 4, 6, 5, 16, -1);
    
    gtk_list_store_append(symbols_store, &iter);
    gtk_list_store_set(symbols_store, &iter, 0, "numbers", 1, "Variable", 2, "int[]", 3, "main", 4, 15, 5, 13, -1);
    
    gtk_list_store_append(symbols_store, &iter);
    gtk_list_store_set(symbols_store, &iter, 0, "i", 1, "Variable", 2, "int", 3, "for_loop", 4, 16, 5, 18, -1);
    
    // Aplicar fondo más oscuro a la tabla de símbolos
    GdkRGBA symbols_bg_color, symbols_fg_color;
    gdk_rgba_parse(&symbols_bg_color, "#0A0A0A");
    gdk_rgba_parse(&symbols_fg_color, "#ffffff");
    gtk_widget_override_background_color(symbols_tree, GTK_STATE_FLAG_NORMAL, &symbols_bg_color);
    gtk_widget_override_color(symbols_tree, GTK_STATE_FLAG_NORMAL, &symbols_fg_color);
    
    g_object_unref(symbols_store);
    
    gtk_box_pack_start(GTK_BOX(symbols_container), symbols_tree, TRUE, TRUE, 0);
    gtk_container_add(GTK_CONTAINER(symbols_scrolled), symbols_container);
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), symbols_scrolled, gtk_label_new("Symbols"));
    
    // Pestaña Errores
    GtkWidget *errors_scrolled = gtk_scrolled_window_new(NULL, NULL);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(errors_scrolled),
                                  GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
    
    // Crear contenedor con padding para errores
    GtkWidget *errors_container = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_container_set_border_width(GTK_CONTAINER(errors_container), 15);
    
    // Aplicar fondo más oscuro al contenedor de errores
    GdkRGBA errors_container_bg;
    gdk_rgba_parse(&errors_container_bg, "#0A0A0A");
    gtk_widget_override_background_color(errors_container, GTK_STATE_FLAG_NORMAL, &errors_container_bg);
    
    GtkListStore *errors_store = gtk_list_store_new(5, G_TYPE_INT, G_TYPE_STRING, 
                                                   G_TYPE_STRING, G_TYPE_INT, G_TYPE_INT);
    GtkWidget *errors_tree = gtk_tree_view_new_with_model(GTK_TREE_MODEL(errors_store));
    
    // Columnas para errores
    const char *error_columns[] = {"No.", "Descripción", "Ámbito", "Línea", "Columna"};
    for (int i = 0; i < 5; i++) {
        GtkCellRenderer *renderer = gtk_cell_renderer_text_new();
        GtkTreeViewColumn *column = gtk_tree_view_column_new_with_attributes(
            error_columns[i], renderer, "text", i, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(errors_tree), column);
    }
    
    // Sin errores por ahora
    GtkWidget *no_errors_label = gtk_label_new("✅ No errors found in the current file.");
    gtk_widget_set_halign(no_errors_label, GTK_ALIGN_CENTER);
    gtk_widget_set_valign(no_errors_label, GTK_ALIGN_CENTER);
    
    // Aplicar fondo más oscuro a la sección de errores
    GdkRGBA errors_bg_color, errors_fg_color;
    gdk_rgba_parse(&errors_bg_color, "#0A0A0A");
    gdk_rgba_parse(&errors_fg_color, "#ffffff");
    gtk_widget_override_background_color(no_errors_label, GTK_STATE_FLAG_NORMAL, &errors_bg_color);
    gtk_widget_override_color(no_errors_label, GTK_STATE_FLAG_NORMAL, &errors_fg_color);
    
    g_object_unref(errors_store);
    
    gtk_box_pack_start(GTK_BOX(errors_container), no_errors_label, TRUE, TRUE, 0);
    gtk_container_add(GTK_CONTAINER(errors_scrolled), errors_container);
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), errors_scrolled, gtk_label_new("Errors"));
    
    return notebook;
}
