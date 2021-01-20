#include <iostream>

using namespace std;

class Interface
{
public:
    virtual int getA() = 0;
};

class Base : public Interface
{
    int _a;
public:
    Base() : _a(42) { }
    Base(int a) : _a(a) { }

    int getA() override 
    {
        return _a;
    }
};

class Derived : public Base
{
    int _b;
public:
    Derived(int a, int b) : Base(a), _b(b) { }

    int getB()
    {
        return _b;
    }
};

void PrintA(Interface& object)
{
    cout << object.getA() << endl;
}

int main()
{
    Base b;
    Derived d = Derived(1, 2);

    cout << b.getA() << endl;
    cout << d.getA() << " " << d.getB() << endl;
    
    PrintA(b);
    PrintA(d);
    
    return 0;
}
