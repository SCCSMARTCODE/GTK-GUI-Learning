#include <gtk/gtk.h>
#define UNUSED(x) (void)(x)


typedef struct ToDoPackage{
    GtkWidget *to_do_list_box;
    GtkWidget *input_field;
}ToDoPackage;


void add_task_handler(GtkWidget *widget, ToDoPackage *data);
void clear_all_handler(GtkWidget *widget, GtkWidget *to_do_list_box);