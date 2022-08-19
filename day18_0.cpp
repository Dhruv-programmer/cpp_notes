// Exception Handling in C++
/* Exceptions are run-time anomalies or abnormal conditions that a program
encounters during its execution.*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a;
    cout << "Enter a number to calculate its natural logarithm: ";
    cin >> a;
    // logarithm of a number (a <= 0) is not be defined.

    try // defines the block of code to be tested for errors
    {
        if (a <= 0)
            throw a; // throws an exception when (a <= 0)
        cout << "natural logarithm of " << a << " is: " << log(a);
    }
    catch (float exception)//defines the block of code to be executed, if an error occurs in the try block.
    {
        cout << "logarithm of the number entered is not defined";
    }
    return 0;
}
