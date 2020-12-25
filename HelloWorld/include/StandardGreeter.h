#ifndef STANDARD_GREETER_H
#define STANDARD_GREETER_H

#include "Greeter.h"

class StandardGreeter : public Greeter
{
    public:
        void greet() override;
};

#endif
