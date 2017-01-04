/********************************************************************************
 *                                                                              *
 *  Author Teofanes Enrique <teofanesp12@gmail.com>                             *
 *                                                                              *
 *  Este programa é um software livre: você pode redistribuir e/ou modificar    *
 *  este programa sob os termos da licença GNU Affero General Public License,   *
 *  publicada pela Free Software Foundation, em sua versão 3 ou, de acordo      *
 *  com sua opção, qualquer versão posterior.                                   *
 *                                                                              *
 *  Este programa é distribuido na esperança de que venha a ser útil,           *
 *  porém SEM QUAISQUER GARANTIAS, nem mesmo a garantia implícita de            *
 *  COMERCIABILIDADE ou ADEQUAÇÃO A UMA FINALIDADE ESPECÍFICA. Veja a           *
 *  GNU Affero General Public License para mais detalhes.                       *
 *                                                                              *
 *  Você deve ter recebido uma cópia da GNU Affero General Public License       *
 *  juntamente com este programa. Caso esse não seja o caso, acesse:            *
 *  <http://www.gnu.org/licenses/>                                              *
 *                                                                              *
 *******************************************************************************/

#include <gtk/gtk.h>

int
main(int argc, char** argv){
    GtkBuilder *gtkBuilder;
    GtkWidget *window;
    
    gtk_init(&argc, &argv);
    
    gtkBuilder = gtk_builder_new();
    gtk_builder_add_from_file(gtkBuilder, "test.ui", NULL);
    
    window = GTK_WIDGET(gtk_builder_get_object(gtkBuilder, "window"));
    
    g_signal_connect(GTK_WINDOW(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    g_object_unref(G_OBJECT(gtkBuilder));
    gtk_widget_show(window);
    gtk_main();
    
    return 0;
}
