#include "ConsoleWriter.h"
#include <iostream>
#include <string>

using namespace std;

void ConsoleWriter::write(int i, ConsoleWriter::MyMathOperation o)
{
    string op;
    switch (o)
    {
        case ConsoleWriter::MyMathOperation::add:
            op = "Addition: ";
            break;
        case ConsoleWriter::MyMathOperation::subtract:
            op = "Subtraction: ";
            break;
        default:
            op = "This code is just for a demo and this is therefore just a hack";
    }
    cout << op << i << endl;
}

