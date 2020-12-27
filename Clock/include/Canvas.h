#ifndef CANVAS_H
#define CANVAS_H

#include <gtkmm/drawingarea.h>

class Canvas : public Gtk::DrawingArea
{
    public: 
        Canvas();
        virtual ~Canvas();

    protected:
        virtual bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr);
};

#endif
