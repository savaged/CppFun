#include "MyMath.h"
#include "ConsoleWriter.h"

int main()
{
    MyMath myMath;
    ConsoleWriter cw;
    int addition = myMath.add(12, 34);
    int subtraction = myMath.subtract(123, 45);
    cw.write(addition, ConsoleWriter::MyMathOperation::add);
    cw.write(subtraction, ConsoleWriter::MyMathOperation::subtract);
    return 0;
}

