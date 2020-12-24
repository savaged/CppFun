#ifndef CIRCLE_H
#define CIRCLE_H

#include <vector>
#include "Point.h"

class Circle
{
    private:
        double _r;
        double _h;
        double _k;
        std::vector<Point> _circumferencePoints;
    
    public:
        Circle(double r, double h, double k);
    
        double get_r();
        double get_h();
        double get_k();
        std::vector<Point> get_circumference_points();
        void set_circumference_points(std::vector<Point> value);

};

#endif
