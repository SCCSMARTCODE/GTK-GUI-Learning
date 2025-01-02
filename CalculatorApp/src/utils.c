#include "callbacks.h"


calKeys* getKeys(GtkBuilder *builder){
    calKeys* key_class = (calKeys*)malloc(sizeof(calKeys));

    key_class->key_0 = GTK_WIDGET(gtk_builder_get_object(builder, "button_0"));
    if (!key_class->key_0){
        g_print("Error Loading key_0 from glade file\n");
    }
    key_class->key_1 = GTK_WIDGET(gtk_builder_get_object(builder, "button_1"));
    if (!key_class->key_1){
        g_print("Error Loading key_1 from glade file\n");
    }
    key_class->key_2 = GTK_WIDGET(gtk_builder_get_object(builder, "button_2"));
    if (!key_class->key_2){
        g_print("Error Loading key_2 from glade file\n");
    }
    key_class->key_3 = GTK_WIDGET(gtk_builder_get_object(builder, "button_3"));
    if (!key_class->key_3){
        g_print("Error Loading key_3 from glade file\n");
    }
    key_class->key_4 = GTK_WIDGET(gtk_builder_get_object(builder, "button_4"));
    if (!key_class->key_4){
        g_print("Error Loading key_4 from glade file\n");
    }
    key_class->key_5 = GTK_WIDGET(gtk_builder_get_object(builder, "button_5"));
    if (!key_class->key_5){
        g_print("Error Loading key_5 from glade file\n");
    }
    key_class->key_6 = GTK_WIDGET(gtk_builder_get_object(builder, "button_6"));
    if (!key_class->key_6){
        g_print("Error Loading key_6 from glade file\n");
    }
    key_class->key_7 = GTK_WIDGET(gtk_builder_get_object(builder, "button_7"));
    if (!key_class->key_7){
        g_print("Error Loading key_7 from glade file\n");
    }
    key_class->key_8 = GTK_WIDGET(gtk_builder_get_object(builder, "button_8"));
    if (!key_class->key_8){
        g_print("Error Loading key_8 from glade file\n");
    }
    key_class->key_9 = GTK_WIDGET(gtk_builder_get_object(builder, "button_9"));
    if (!key_class->key_9){
        g_print("Error Loading key_9 from glade file\n");
    }
    key_class->key_dot = GTK_WIDGET(gtk_builder_get_object(builder, "button_DOT"));
    if (!key_class->key_dot){
        g_print("Error Loading key_dot from glade file\n");
    }

    key_class->key_add = GTK_WIDGET(gtk_builder_get_object(builder, "button_ADD"));
    if (!key_class->key_add){
        g_print("Error Loading key_add from glade file\n");
    }
    key_class->key_sub = GTK_WIDGET(gtk_builder_get_object(builder, "button_SUB"));
    if (!key_class->key_sub){
        g_print("Error Loading key_sub from glade file\n");
    }
    key_class->key_div = GTK_WIDGET(gtk_builder_get_object(builder, "button_DIV"));
    if (!key_class->key_div){
        g_print("Error Loading key_div from glade file\n");
    }
    key_class->key_mul = GTK_WIDGET(gtk_builder_get_object(builder, "button_MUL"));
    if (!key_class->key_mul){
        g_print("Error Loading key_mul from glade file\n");
    }
    key_class->key_eq = GTK_WIDGET(gtk_builder_get_object(builder, "button_EQ"));
    if (!key_class->key_eq){
        g_print("Error Loading key_eq from glade file\n");
    }
    key_class->key_c = GTK_WIDGET(gtk_builder_get_object(builder, "button_C"));
    if (!key_class->key_c){
        g_print("Error Loading key_c from glade file\n");
    }
    key_class->key_ce = GTK_WIDGET(gtk_builder_get_object(builder, "button_CE"));
    if (!key_class->key_ce){
        g_print("Error Loading key_ce from glade file\n");
    }
    key_class->key_ob = GTK_WIDGET(gtk_builder_get_object(builder, "button_OB"));
    if (!key_class->key_ob){
        g_print("Error Loading key_ob from glade file\n");
    }
    key_class->key_cb= GTK_WIDGET(gtk_builder_get_object(builder, "button_CB"));
    if (!key_class->key_cb){
        g_print("Error Loading key_cb from glade file\n");
    }

    return key_class;
}


void load_css(void){
    GtkCssProvider *provider;
    GdkDisplay *display;
    GdkScreen *screen;

    provider = gtk_css_provider_new();
    display = gdk_display_get_default();
    screen = gdk_display_get_default_screen(display);

    gtk_style_context_add_provider_for_screen(screen, GTK_STYLE_PROVIDER(provider), GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

    gtk_css_provider_load_from_path(provider, CSS_STYLE_FILE_PATH, NULL);

    g_object_unref(provider);
}