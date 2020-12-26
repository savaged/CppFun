#ifndef POINT_H
#define POINT_H

class Point
{
    private:
        double _x, _y;

    public:
        Point(double x, double y);

        double get_x();
        double get_y();
};

#endif
