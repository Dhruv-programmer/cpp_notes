//Initialization list in Constructors in C++
#include <iostream>
using namespace std;
/*Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section{
    constructor definition;
}*/
class program
{
    int x, y;
public:
    program(int a, int b) : x(a),y(b)  // Thus x will be assigned value a and y will be assigned value b
    {
        cout << "Constructor Invoked " << endl;
    }
    void show(void)
    {
        cout << "The value of x is " << x << endl;
        cout << "The value of y is " << y << endl;
    }
};
int main()
{
    program simple(5, 10);
    simple.show();
    return 0;
}
/*
The main thing to note here is that if we use the code shown below to
initialize data members a garbage value will be stored in x because
the data member “x” is being initialized first and the “y” is
being initialized second so we have to assign the value to “x” data member first.

Test(int i, int j) : y(b), x(a+y)

But if we use the code shown below to initialize data members the
compiler will not throw an error because the data member “x” is
being initialized first and we are assigning the value to the
data member “x” first.

Test(int i, int j) : x(a), y(x + b)
*/