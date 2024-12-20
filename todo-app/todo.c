#include "todo.h"


int main(int argc, char* argv[]){

    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    GtkWidget *add_task = gtk_button_new_with_label("Add Task");
    GtkWidget *clear_all = gtk_button_new_with_label("Clear All");
    GtkWidget *input_field = gtk_entry_new();

    gtk_entry_set_has_frame(GTK_ENTRY(input_field), 1);
    gtk_entry_set_placeholder_text(GTK_ENTRY(input_field), "What's Next?...");

    GtkWidget *window_layout = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);

    GtkWidget *to_do_list_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    GtkWidget *utils_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5);
    
    
    gtk_window_set_default_size(GTK_WINDOW(window), 1000, 600);
    gtk_window_set_title(GTK_WINDOW(window), "To-Do List");

    gtk_box_pack_start(GTK_BOX(utils_box), input_field, 1, 2, 10);
    gtk_box_pack_start(GTK_BOX(utils_box), add_task, 0, 0, 10);
    gtk_box_pack_start(GTK_BOX(utils_box), clear_all, 0, 0, 10);

    gtk_box_pack_start(GTK_BOX(window_layout), to_do_list_box, 1, 1, 30);
    gtk_box_pack_start(GTK_BOX(window_layout), utils_box, 0, 1, 20);
    gtk_container_add(GTK_CONTAINER(window), window_layout);


    /**
     * add-task button signal management
     */
    ToDoPackage *add_task_package = malloc(sizeof(add_task_handler));
    add_task_package->input_field = input_field;
    add_task_package->to_do_list_box = to_do_list_box;

    g_signal_connect(add_task, "clicked", G_CALLBACK(add_task_handler), add_task_package);


    /**
     * clear-all button signal management
     */
    g_signal_connect(clear_all, "clicked", G_CALLBACK(clear_all_handler), to_do_list_box);


    gtk_widget_show_all(window);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_main();


    return 0;
}