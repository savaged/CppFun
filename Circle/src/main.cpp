#include "Circle.h"
#include "CircleBuilder.h"
#include "CirclePresenter.h"
#include <iostream>
#include <cstdlib>
#include <stdexcept>

int main() 
{
    CircleBuilder cb;
    Circle circle;
    try
    {
        circle = cb.build(5, 3, 2);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what();
        std::exit(EXIT_FAILURE);
    }
    CirclePresenter cp;
    cp.show(circle);

    std::exit(EXIT_SUCCESS);
}
