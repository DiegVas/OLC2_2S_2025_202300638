#include <stdio.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include "../include/parser.tab.h"
extern int yyparse();
extern void yyrestart(FILE *input_file);
extern void yy_delete_buffer(void *buffer);
extern void *yy_scan_string(const char *str);
extern FILE *yyin;

GtkWidget *input_view;
GtkWidget *output_view;
char output_buffer_global[1024];
void set_output(const char *text) {
    GtkTextBuffer *output_buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(output_view));
    gtk_text_buffer_set_text(output_buffer, text, -1);
}

int yyerror(const char *s) {
    snprintf(output_buffer_global, sizeof(output_buffer_global), "Error: %s", s);
    set_output(output_buffer_global);
    return 0;
}

void on_open_file(GtkWidget *widget, gpointer data) {
    GtkWidget *dialog;
    GtkTextBuffer *buffer;
    dialog = gtk_file_chooser_dialog_new("Abrir archivo", NULL,
        GTK_FILE_CHOOSER_ACTION_OPEN,
        "_Cancelar", GTK_RESPONSE_CANCEL,
        "_Abrir", GTK_RESPONSE_ACCEPT,
        NULL);
    if (gtk_dialog_run(GTK_DIALOG(dialog)) == GTK_RESPONSE_ACCEPT) {
        char *filename;
        GtkFileChooser *chooser = GTK_FILE_CHOOSER(dialog);
        filename = gtk_file_chooser_get_filename(chooser);
        FILE *file = fopen(filename, "r");
        if (file) {
            fseek(file, 0, SEEK_END);
            long length = ftell(file);
            fseek(file, 0, SEEK_SET);
            char *content = malloc(length + 1);
            fread(content, 1, length, file);
            content[length] = '\0';
            buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(input_view));
            gtk_text_buffer_set_text(buffer, content, -1);
            free(content);
            fclose(file);
        }
        g_free(filename);
    }
    gtk_widget_destroy(dialog);
}

void on_run_code(GtkWidget *widget, gpointer data) {
    GtkTextBuffer *input_buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(input_view));
    GtkTextIter start, end;
    gtk_text_buffer_get_start_iter(input_buffer, &start);
    gtk_text_buffer_get_end_iter(input_buffer, &end);
    gchar *input_text = gtk_text_buffer_get_text(input_buffer, &start, &end, FALSE);
    // Analizar el texto usando Flex/Bison
    void *buffer = yy_scan_string(input_text);
    yyparse();
    yy_delete_buffer(buffer);
    g_free(input_text);
}

void launch_ui(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Analizador Sintáctico/Léxico");
    gtk_window_set_default_size(GTK_WINDOW(window), 700, 400);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 8);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    GtkWidget *header = gtk_header_bar_new();
    gtk_header_bar_set_title(GTK_HEADER_BAR(header), "OLC2 - Analizador");
    gtk_header_bar_set_show_close_button(GTK_HEADER_BAR(header), TRUE);
    gtk_window_set_titlebar(GTK_WINDOW(window), header);

    GtkWidget *open_button = gtk_button_new_with_label("Abrir archivo");
    g_signal_connect(open_button, "clicked", G_CALLBACK(on_open_file), NULL);
    gtk_header_bar_pack_start(GTK_HEADER_BAR(header), open_button);

    GtkWidget *run_button = gtk_button_new_with_label("Ejecutar");
    g_signal_connect(run_button, "clicked", G_CALLBACK(on_run_code), NULL);
    gtk_header_bar_pack_end(GTK_HEADER_BAR(header), run_button);

    GtkWidget *paned = gtk_paned_new(GTK_ORIENTATION_HORIZONTAL);
    gtk_box_pack_start(GTK_BOX(vbox), paned, TRUE, TRUE, 0);

    input_view = gtk_text_view_new();
    gtk_text_view_set_wrap_mode(GTK_TEXT_VIEW(input_view), GTK_WRAP_WORD);
    gtk_paned_pack1(GTK_PANED(paned), input_view, TRUE, FALSE);

    output_view = gtk_text_view_new();
    gtk_text_view_set_wrap_mode(GTK_TEXT_VIEW(output_view), GTK_WRAP_WORD);
    gtk_text_view_set_editable(GTK_TEXT_VIEW(output_view), FALSE);
    gtk_paned_pack2(GTK_PANED(paned), output_view, TRUE, FALSE);

    gtk_widget_show_all(window);
    gtk_main();
}