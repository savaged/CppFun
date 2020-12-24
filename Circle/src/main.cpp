#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include "CircleBuilder.h"

int main() 
{
    CircleBuilder cb;

    try
    {
        Circle circle = cb.build(5, 3, 2);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what();
        std::exit(EXIT_FAILURE);
    }
    // TODO present circle
    
    std::exit(EXIT_SUCCESS);
}
