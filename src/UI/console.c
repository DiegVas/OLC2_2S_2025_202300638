#include "UI.h"

// Función para crear la consola
GtkWidget* create_console(GtkWidget **out_text_view) {
    GtkWidget *scrolled = gtk_scrolled_window_new(NULL, NULL);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrolled),
                                  GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
    
    GtkWidget *text_view = gtk_text_view_new();
    gtk_text_view_set_monospace(GTK_TEXT_VIEW(text_view), TRUE);
    gtk_text_view_set_editable(GTK_TEXT_VIEW(text_view), FALSE);
    
    // Devolver el text_view si se solicita
    if (out_text_view) {
        *out_text_view = text_view;
    }
    
    // Agregar padding interno al texto de la consola
    gtk_text_view_set_left_margin(GTK_TEXT_VIEW(text_view), 15);
    gtk_text_view_set_right_margin(GTK_TEXT_VIEW(text_view), 15);
    gtk_text_view_set_top_margin(GTK_TEXT_VIEW(text_view), 15);
    gtk_text_view_set_bottom_margin(GTK_TEXT_VIEW(text_view), 15);
    
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(text_view));
    gtk_text_buffer_set_text(buffer, 
        "JavaLang Interpreter Console\n"
        "Ready to execute .usl files...\n"
        ">>> Compilation started\n"
        ">>> Lexical analysis: OK\n"
        ">>> Syntax analysis: OK\n"
        ">>> Semantic analysis: OK\n"
        ">>> Execution started\n"
        "Hello, JavaLang!\n"
        "x = 10\n"
        "x is greater than 5\n"
        "Number: 1\n"
        "Number: 2\n"
        "Number: 3\n"
        "Number: 4\n"
        "Number: 5\n"
        ">>> Execution completed successfully\n", -1);
    
    // Aplicar tema oscuro consistente
    GdkRGBA bg_color, fg_color;
    gdk_rgba_parse(&bg_color, "#0A0A0A");
    gdk_rgba_parse(&fg_color, "#00ff00");
    gtk_widget_override_background_color(text_view, GTK_STATE_FLAG_NORMAL, &bg_color);
    gtk_widget_override_color(text_view, GTK_STATE_FLAG_NORMAL, &fg_color);
    
    gtk_container_add(GTK_CONTAINER(scrolled), text_view);
    
    return scrolled;
}
