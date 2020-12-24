#include "Circle.h"

class CircleBuilder
{
    private:
        enum quadrantType 
        {
            I = 1,
            II,
            III,
            IV
        };
        
        bool build_quadrant(quadrantType q, Circle& circle);
        double get_x(int theta, double r);
        double get_y(int theta, double r);
        double transform_x_for_quadrant(double x, quadrantType q);
        double transform_y_for_quadrant(double y, quadrantType q);
        double shift_x_for_center(double x, double h);
        double shift_y_for_center(double y, double k);
        bool is_in_domain(int theta);
        bool is_in_range(double item, double r);

    public:
        CircleBuilder() { };

        bool build(double r, double h, double k);
};
