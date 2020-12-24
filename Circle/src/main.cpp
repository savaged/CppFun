#include <iostream>
#include <cstdlib>
#include "CircleBuilder.h"

int main() 
{
    bool result = false;
    
    CircleBuilder cb;

    result = cb.build(5, 3, 2);

    if (!result)
    {
        std::exit(EXIT_FAILURE);
    }
    std::exit(EXIT_SUCCESS);
}
