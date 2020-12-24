#include "Circle.h"

Circle::Circle(double r, double h, double k)
{
    _r = r;
    _h = h;
    _k = k;
}

double Circle::get_r() 
{ 
    return _r;
}

double Circle::get_h() 
{
    return _h;
}

double Circle::get_k() 
{
    return _k;
}

std::vector<Point> Circle::get_circumference_points() 
{
    return _circumferencePoints; 
}

void Circle::set_circumference_points(std::vector<Point> value)
{
    _circumferencePoints = value;
}
