// Catch block and type conversion in C++
#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw 'a';
    }
    catch (int a)
    {
        cout << "Integer caught";
    }
    catch (...)
    {
        cout << "Default catch block";
    }
    return 0;
}
// In the above program, a character ‘x’ is thrown and there is a catch block to catch an
// int. One might think that the int catch block could be matched by considering ASCII
// value of ‘x’. But such conversions are not performed for catch blocks.