#include "main.h"


void init__(){

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 500);
    gtk_window_set_resizable(GTK_WINDOW(window), FALSE);
    gtk_window_set_title(GTK_WINDOW(window), "Personal Expense Tracker");

    GtkWidget* window_base_layout_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    GtkWidget* window_main_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 1);
    GtkWidget* window_footer_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
    GtkWidget* window_expense_form_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
    GtkWidget* window_ecpense_list_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);

    // expense form section

    GtkWidget* form_title = gtk_label_new("Expense Entry Form");
    GtkWidget* form_body = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
    GtkWidget* form_body_name_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 1);
    GtkWidget* form_body_amount_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 1);
    GtkWidget* form_body_category_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 1);

    GtkWidget* form_name_label = gtk_label_new("- Expense Name:");
    GtkWidget* form_amount_label = gtk_label_new("- Amount:");
    GtkWidget* form_category_label = gtk_label_new("- Category:");


    GtkWidget* form_name = gtk_entry_new();

    GtkAdjustment *adj = gtk_adjustment_new(5, 0, 1000000000000, 5, 10, 0); //  planning to manipulate -2 and -1 for better understanding
    GtkWidget* form_amount = gtk_spin_button_new(adj, 0, 0);

    GtkWidget* form_category = gtk_combo_box_text_new();
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(form_category), "Food & Dining");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(form_category), "Transportation");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(form_category), "Housing");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(form_category), "Entertainment");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(form_category), "Shopping");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(form_category), "Health & Fitness");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(form_category), "Travel");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(form_category), "Education");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(form_category), "Personal Care");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(form_category), "Miscellaneous");

    GtkWidget* form_save_button = gtk_button_new_with_label("Save Expense");


    // expense list section

    GtkWidget* list_title = gtk_label_new("Expense List");

    GtkListStore *list_store = gtk_list_store_new(3, G_TYPE_STRING, G_TYPE_FLOAT, G_TYPE_STRING);
    GtkWidget *tree_view = gtk_tree_view_new_with_model(GTK_TREE_MODEL(list_store));    
    GtkWidget *tree_view_window_scroller = gtk_scrolled_window_new(NULL, NULL);

    // Add Columns
    GtkCellRenderer *renderer;
    GtkTreeViewColumn *column;

    // Column 1: Name
    renderer = gtk_cell_renderer_text_new();
    column = gtk_tree_view_column_new_with_attributes("Name", renderer, "text", 0, NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(tree_view), column);

    // Column 2: Amount
    renderer = gtk_cell_renderer_text_new();
    column = gtk_tree_view_column_new_with_attributes("Amount", renderer, "text", 1, NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(tree_view), column);

    // Column 3: Category
    renderer = gtk_cell_renderer_text_new();
    column = gtk_tree_view_column_new_with_attributes("Category", renderer, "text", 2, NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(tree_view), column);

    


    // packing up widgets

    gtk_box_pack_start(GTK_BOX(form_body_name_box), form_name_label, 1, 0 , 0);
    gtk_box_pack_start(GTK_BOX(form_body_name_box), form_name, 0, 0 , 0);

    gtk_box_pack_start(GTK_BOX(form_body_amount_box), form_amount_label, 1, 0 , 0);
    gtk_box_pack_start(GTK_BOX(form_body_amount_box), form_amount, 0, 0 , 0);

    gtk_box_pack_start(GTK_BOX(form_body_category_box), form_category_label, 1, 0 , 0);
    gtk_box_pack_start(GTK_BOX(form_body_category_box), form_category, 0, 0 , 0);


    gtk_box_pack_start(GTK_BOX(form_body), form_body_name_box, 0, 0 , 5);
    gtk_box_pack_start(GTK_BOX(form_body), form_body_amount_box, 0, 0 , 5);
    gtk_box_pack_start(GTK_BOX(form_body), form_body_category_box, 0, 0 , 5);
    gtk_box_pack_start(GTK_BOX(form_body), form_save_button, 0, 0 , 5);



    gtk_box_pack_start(GTK_BOX(window_expense_form_box), form_title, 0, 0 , 15);
    gtk_box_pack_start(GTK_BOX(window_expense_form_box), form_body, 0, 0 , 10);

    // =====================
    gtk_box_pack_start(GTK_BOX(window_ecpense_list_box), list_title, 0, 0 , 10);

    gtk_container_add(GTK_CONTAINER(tree_view_window_scroller), tree_view);
    gtk_box_pack_start(GTK_BOX(window_ecpense_list_box), tree_view_window_scroller, 1, 1 , 10);
    // =====================

    gtk_box_pack_start(GTK_BOX(window_main_box), window_expense_form_box, 0, 0 , 15);
    gtk_box_pack_start(GTK_BOX(window_main_box), window_ecpense_list_box, 1, 1 , 10);

    gtk_box_pack_start(GTK_BOX(window_base_layout_box), window_main_box, 0, 0 , 10);
    gtk_box_pack_start(GTK_BOX(window_base_layout_box), window_footer_box, 0, 0 , 10);

    gtk_container_add(GTK_CONTAINER(window), window_base_layout_box);


    // Add Data iter
    GtkTreeIter iter;

    // listening to save expense botton
    SaveExpensePackage save_data_pack = {.iter = &iter, .form_name = form_name, .form_amount = form_amount, .form_category = form_category, .list_store = list_store};
    g_signal_connect(form_save_button, "clicked", G_CALLBACK(save_expense_botton_handler), &save_data_pack);

    gtk_widget_show_all(window);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
}