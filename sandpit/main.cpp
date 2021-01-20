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
    int _c;
public:
    Derived(int a, int b, int c) : Base(a), _b(b), _c(c) { }

    int getB()
    {
        return _b;
    }

    int getC()
    {
        return _c;
    }
};

void PrintA(Interface& object)
{
    cout << object.getA() << endl;
}

int main()
{
    Base b;
    Derived d = Derived(1, 2, 3);

    cout << b.getA() << endl;
    cout << d.getA() << " " << d.getB() << " " << d.getC() << endl;
    
    PrintA(b);
    PrintA(d);
    
    return 0;
}
