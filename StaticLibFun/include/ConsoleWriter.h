#ifndef CONSOLE_WRITER_H
#define CONSOLE_WRITER_H

class ConsoleWriter
{
    public:
        enum MyMathOperation { add, subtract };
        void write(int, MyMathOperation);
};

#endif
