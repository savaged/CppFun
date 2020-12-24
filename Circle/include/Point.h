#ifndef POINT_H
#define POINT_H

class Point
{
    private:
        double _x, _y;

    public:
        Point(double x, double y);

        double getX() { return _x; }
        double getY() { return _y; }
};

#endif
