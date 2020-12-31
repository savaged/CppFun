/*
 *
 * Wanted to emulate this `echo 'fooman@example.com' | tr 'A-Za-z' 'N-ZA-Mn-za-m'
 * and found some code that uses std::transform with a lambda on codereview.stackexchange
 *
 */

#include <regex>
#include <string>
#include <iostream>
using namespace std;

string transform(string source);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "usage: " << argv[0] << " \'your input in quotes\'" << endl;
    }
    else
    {
        cout << transform(argv[1]) << endl;
    }
}

string transform(string source)
{
    transform(
        begin(source), end(source), begin(source),
        [] (char c) -> char {
            if (not isalpha(c))
                return c;

            char const pivot = isupper(c) ? 'A' : 'a';
            return (c - pivot + 13) % 26 + pivot;
        });
    return source;
}
