const double R = 5;
const double H = 3;
const double K = 2;

enum quadrantType 
{
    I = 1,
    II,
    III,
    IV
};

bool output_quadrant(quadrantType q);
double get_x(int theta);
double get_y(int theta);
double transform_x_for_quadrant(double x, quadrantType q);
double transform_y_for_quadrant(double y, quadrantType q);
double shift_x_for_center(double x);
double shift_y_for_center(double y);
bool is_in_domain(int theta);
bool is_in_range(double item);

