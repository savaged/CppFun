#include "CirclePresenter.h"
#include "Point.h"
#include <vector>
#include <iostream>
using namespace std;

void CirclePresenter::show(Circle circle)
{
    vector<Point> circumferencePoints = circle.get_circumference_points();

    for (auto point : circumferencePoints)
    {
        cout << point.get_x() << ", " << point.get_y() << endl;
    }
}
