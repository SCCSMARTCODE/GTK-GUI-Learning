#pragma once

#include <gtk/gtk.h>

#define UNUSED(x) (void)(x)

typedef struct SaveExpensePackage{
    GtkListStore *list_store;
    GtkTreeIter *iter;
    GtkWidget* form_name;
    GtkWidget* form_amount;
    GtkWidget* form_category;

}SaveExpensePackage;


void init__();
void save_expense_botton_handler(GtkWidget *widget, SaveExpensePackage *data);