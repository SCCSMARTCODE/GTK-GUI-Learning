#include "main.h"

void save_expense_botton_handler(GtkWidget *widget, SaveExpensePackage *data){

    const char *expense_name = gtk_entry_get_text(GTK_ENTRY(data->form_name));
    char *expense_category = gtk_combo_box_text_get_active_text(GTK_COMBO_BOX_TEXT(data->form_category));
    double expense_amount = gtk_spin_button_get_value(GTK_SPIN_BUTTON(data->form_amount));

    UNUSED(widget);

    if (strlen(expense_name) > 1 && expense_category != NULL && expense_amount){

        gtk_list_store_append(data->list_store, data->iter);
        gtk_list_store_set(data->list_store, data->iter, 0, expense_name, 1, expense_amount, 2, expense_category, -1);

        gtk_entry_set_text(GTK_ENTRY(data->form_name), "");
        gtk_spin_button_set_value(GTK_SPIN_BUTTON(data->form_amount), 5);
        gtk_combo_box_set_active(GTK_COMBO_BOX(data->form_category), -1);
    }
}