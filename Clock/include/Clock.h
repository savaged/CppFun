#ifndef GTKMM_EXAMPLE_CLOCK_H
#define GTKMM_EXAMPLE_CLOCK_H

#include <gtkmm/drawingarea.h>

class Clock : public Gtk::DrawingArea
{
public:
  Clock();
  virtual ~Clock();

protected:
  //Override default signal handler:
  virtual bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr);

  bool on_timeout();

  double m_radius;
  double m_line_width;

};

#endif // GTKMM_EXAMPLE_CLOCK_H

