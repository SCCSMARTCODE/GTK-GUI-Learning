#include "callbacks.h"

int main(int argc, char *argv[]) {  

    GtkBuilder *builder;
    GtkWidget *window;
    GtkWidget *input_screen;
    GtkWidget *result_screen;

    gtk_init(&argc, &argv);

    load_css();

    // setting up necessesary tools start

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

    calKeys *cal_keys = getKeys(builder);

    input_screen = GTK_WIDGET(gtk_builder_get_object(builder, "input_screen"));
    if(!input_screen){
        g_print("Error Loading input_screen from glade file\n");
        return 1;
    }

    result_screen = GTK_WIDGET(gtk_builder_get_object(builder, "result_screen"));
    if(!result_screen){
        g_print("Error Loading result_screen from glade file\n");
        return 1;
    }

    // setting up necessesary tools end

    gtk_builder_connect_signals(builder, NULL);
    g_signal_connect(window, "destroy", gtk_main_quit, NULL);

    gtk_widget_show_all(window);

    gtk_main();

    free(cal_keys);
    return 0;  
}  