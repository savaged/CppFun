#include "MainWindow.h"
#include "Canvas.h"
#include <gtkmm/main.h>

int main(int argc, char *argv[]) 
{
    Gtk::Main kit(argc, argv);

    MainWindow mainWindow;
    mainWindow.set_title("Clock");

    Canvas canvas;
    mainWindow.add(canvas);
    canvas.show();

    Gtk::Main::run(mainWindow);

    return EXIT_SUCCESS;
}
