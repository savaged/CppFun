#include "CircleBuilder.h"
#include "Circle.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

bool CircleBuilder::build(double r, double h, double k)
{
    Circle circle(r, h, k);

    for (int i = CircleBuilder::I; i <= CircleBuilder::IV; i++)
    {
        bool result = build_quadrant((CircleBuilder::quadrantType)i, circle);
        if (!result)
        {
            return false;
        }
    }
    return true;
}

bool CircleBuilder::build_quadrant(CircleBuilder::quadrantType q, Circle& circle)
{
    double r = circle.get_r();
    double h = circle.get_h();
    double k = circle.get_k();

    for (int i = 0; i <= 90; i++)
    {
        double x, y;

        x = get_x(i, r);
        y = get_y(i, r);
        
        if (is_in_range(x, r) && is_in_range(y, r))
        {
            x = transform_x_for_quadrant(x, q);
            y = transform_y_for_quadrant(y, q);
            
            x = shift_x_for_center(x, h);
            y = shift_y_for_center(y, k);

            std::cout << x << ", " <<  y << std::endl;
        }
        else
        {
            std::cout << x << ", " << y << " <- Error: Out of range!" << std::endl;
            return false;
        }
    }
    return true;
}

double CircleBuilder::get_x(int theta, double r)
{
    if (!is_in_domain(theta)) 
        return (double)-1;

    double sinResultInDegrees, value;

    sinResultInDegrees = sin(theta * (M_PI / 180.0));

    value = sinResultInDegrees * r;
    
    return value;
}

double CircleBuilder::get_y(int theta, double r)
{
    if (!is_in_domain(theta)) 
        return (double)-1;

    double cosResultInDegrees, value;

    cosResultInDegrees = cos(theta * (M_PI / 180.0));

    value = cosResultInDegrees * r;

    return value;
}

double CircleBuilder::transform_x_for_quadrant(double x, quadrantType q)
{
    double value = 0;
    switch (q)
    {
        case I:
        case IV:
            value = x;
            break;
        case II:
        case III:
            value = x * -1;
            break;
    }
    return value;
}

double CircleBuilder::transform_y_for_quadrant(double y, quadrantType q)
{
    double value = 0;
    switch (q)
    {
        case I:
        case II:
            value = y;
            break;
        case III:
        case IV:
            value = y * -1;
            break;
    }
    return value;
}

double CircleBuilder::shift_x_for_center(double x, double h)
{
    double value = 0;
    value = x - h;
    return value;
}

double CircleBuilder::shift_y_for_center(double y, double k)
{
    double value = 0;
    value = y - k;
    return value;
}

bool CircleBuilder::is_in_domain(int theta)
{
    bool value;
    value = (theta >= 0 && theta <= 90);
    return value;
}

bool CircleBuilder::is_in_range(double item, double r)
{
    bool value;
    value = (item >= 0 && item <= r);
    return value;
}

