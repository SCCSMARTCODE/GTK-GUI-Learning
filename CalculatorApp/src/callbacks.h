#pragma once

#define UNUSED(x) (void)x

#include <gtk/gtk.h>

#define GLADE_SERIALIZED_FILE_PATH "ui/calculator.glade"
#define CSS_STYLE_FILE_PATH "assets/styles/main.css"


typedef struct calKeys{
    GtkWidget *key_0;
    GtkWidget *key_1;
    GtkWidget *key_2;
    GtkWidget *key_3;
    GtkWidget *key_4;
    GtkWidget *key_5;
    GtkWidget *key_6;
    GtkWidget *key_7;
    GtkWidget *key_8;
    GtkWidget *key_9;
    GtkWidget *key_dot;
    GtkWidget *key_eq;
    GtkWidget *key_div;
    GtkWidget *key_mul;
    GtkWidget *key_sub;
    GtkWidget *key_add;
    GtkWidget *key_c;
    GtkWidget *key_ce;
    GtkWidget *key_ob;
    GtkWidget *key_cb;
}calKeys;



calKeys* getKeys(GtkBuilder *builder);
void load_css(void);