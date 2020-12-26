#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include "StandardGreeter.h"

class MainWindow : public Gtk::Window
{
    public:
        MainWindow();
        virtual ~MainWindow();

    protected:
        void on_button_clicked();
        Gtk::Button m_button;
        StandardGreeter m_greeter;
};

#endif
