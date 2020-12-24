#include <iostream>
#include <cstdlib>
#include "circle.h"

int main() 
{
    bool result = false;

    for (int i = I; i <= IV; i++)
    {
        result = output_quadrant((quadrantType)i);

        if (!result)
        {
            std::exit(EXIT_FAILURE);
        }
    }
    std::exit(EXIT_SUCCESS);
}
