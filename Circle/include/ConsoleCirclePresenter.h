#include "CirclePresenter.h"
#include "Circle.h"

class ConsoleCirclePresenter : public CirclePresenter
{
    public:
        ConsoleCirclePresenter() { };

        void show(Circle circle) override;
};

