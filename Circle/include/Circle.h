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
    
        double getR() { return _r; }
        double getH() { return _h; }
        double getK() { return _k; }
        std::vector<Point> getCircumferencePoints() { return _circumferencePoints; }
};

#endif
