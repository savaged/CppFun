# Steps to creating a static library

1. Compile cpp source file(s) to objects
    * Example: 
        ```
        g++ -I include -c -o obj/MyMath.o src/MyMath.cpp
        g++ -I include -c -o obj/ConsoleWriter.o src/ConsoleWriter.cpp
        ```
2. Link objects
    * Example: `ar rs lib/libmymath.a obj/MyMath.o obj/ConsoleWriter.o`
3. In the consumer of the static library add an include to the library header file(s)
    * Example:
        ```
        #include "MyMath.h"
        #include "ConsoleWriter.h"
        ```
4. Compile consumer source cpp file (including the header file(s))
    * Example: `g++ -c -I include -o obj/main.o src/main.cpp`
5. Build the consumer executable with the object(s) and static library
    * Example: `g++ -o bin/demo obj/main.o lib/libmymath.a`
6. Run the executable
    * Example: `bin/demo`
