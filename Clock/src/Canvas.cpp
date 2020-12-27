#include "Canvas.h"
#include <cairomm/context.h>

Canvas::Canvas() { }

Canvas::~Canvas() { }

bool Canvas::on_draw(const Cairo::RefPtr<Cairo::Context>& cr)
{
    Gtk::Allocation allocation = get_allocation();
    const int width = allocation.get_width();
    const int height = allocation.get_height();

    int xc, yc;
    xc = width / 2;
    yc = height / 2;

    cr->set_line_width(10.0);

    cr->set_source_rgb(0.0, 0.8, 0.0);
    cr->move_to(0, 0);
    cr->line_to(xc, yc);
    //cr->line_to(0, height);

    cr->stroke();

    return true;
}

