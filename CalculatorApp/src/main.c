#include "callbacks.h"

int main(int argc, char *argv[]) {  

    GtkBuilder *builder;
    GtkWidget *window;

    gtk_init(&argc, &argv);

    builder = gtk_builder_new_from_file(GLADE_SERIALIZED_FILE_PATH);
    if (!builder){
        g_print("Error Loading .glade file\n");
        return 1;
    }

    window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    if(!window){
        g_print("Error Loading main_window from glade file\n");
        return 1;
    }

    gtk_builder_connect_signals(builder, NULL);
    g_signal_connect(window, "destroy", gtk_main_quit, NULL);

    gtk_widget_show_all(window);

    gtk_main();


    return 0;  
}  