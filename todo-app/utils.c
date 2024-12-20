#include "todo.h"

void add_task_handler(GtkWidget *widget, ToDoPackage *data){

    UNUSED(widget);

    // creating new todo box
    const char *buffer_text = gtk_entry_get_text(GTK_ENTRY(data->input_field));

    if (strlen(buffer_text) >= 1){
        GtkWidget *each_todo_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 10);
        GtkWidget *todo_label = gtk_label_new(buffer_text);
        GtkWidget *check_box = gtk_check_button_new();

        gtk_box_pack_start(GTK_BOX(each_todo_box), todo_label, 0, 0, 5);
        gtk_box_pack_start(GTK_BOX(each_todo_box), check_box, 0, 0, 5);

        gtk_box_pack_start(GTK_BOX(data->to_do_list_box), each_todo_box, 0, 0, 5);

        gtk_widget_show(each_todo_box);
        gtk_widget_show(todo_label);
        gtk_widget_show(check_box);

        g_print("Botton Is been Cliked capturing [  %s  ]\n", buffer_text);
        gtk_entry_set_text(GTK_ENTRY(data->input_field), "");
    }
    
}

void clear_all_handler(GtkWidget *widget, GtkWidget *to_do_list_box){

    UNUSED(widget);
    GList *children, *iter;

    children = gtk_container_get_children(GTK_CONTAINER(to_do_list_box));

    for (iter = children; iter != NULL; iter = g_list_next(iter)) {
        GtkWidget *child = GTK_WIDGET(iter->data);
        gtk_widget_destroy(child);
    }

    g_list_free(children);
}