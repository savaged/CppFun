#include <iostream>

using namespace std;

int main()
{
    int a = 42;
    int *p = &a;
    int b = *p;

    cout << p << endl;
    cout << b << endl;
    
    return 0;
}
