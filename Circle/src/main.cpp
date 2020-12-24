#include "config.h"
#include "Circle.h"
#include "CircleBuilder.h"
#include "ConsoleCirclePresenter.h"
#include <iostream>
#include <cstdlib>
#include <stdexcept>

int main() 
{
    CircleBuilder cb;
    Circle circle;
    try
    {
        // R, H & K can be changed in include/config.h
        circle = cb.build(R, H, K);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what();
        std::exit(EXIT_FAILURE);
    }
    ConsoleCirclePresenter cp;
    cp.show(circle);

    std::exit(EXIT_SUCCESS);
}
