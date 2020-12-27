#include "config.h"
#include "Circle.h"
#include "CircleBuilder.h"
#include "MainWindow.h"
#include "Canvas.h"
#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <gtkmm/main.h>

int main(int argc, char *argv[]) 
{
    CircleBuilder cb;
    Circle circle;
    try
    {
        // R, H & K can be changed in include/config.h
        circle = cb.build(R, H, K, STEP);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what();
        std::exit(EXIT_FAILURE);
    }
    Gtk::Main kit(argc, argv);

    MainWindow mainWindow;
    mainWindow.set_title("Clock");

    Canvas canvas;
    mainWindow.add(canvas);
    canvas.show();

    Gtk::Main::run(mainWindow);

    std::exit(EXIT_SUCCESS);
}
