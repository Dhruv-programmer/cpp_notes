// Constructors in C++
#include <iostream>
using namespace std;
class rectangle
{
    int length;
    int width;
    // Creating a Constructor
    // Constructor is a special member function with the same name as that of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created
public:
    rectangle(); // Constructor declaration
    void printdata(void)
    {
        cout << "The length of rectangle is " << length << endl;
        cout << "The width of rectangle is " << width << endl;
    }
};
rectangle::rectangle(){ // ----> This is a default constructor as it takes no parameters
    length = 0;
    width = 0;
}
int main()
{
    rectangle a, b;
    a.printdata();
    b.printdata();

    return 0;
}

/*
Important Characteristics of Constructors in C++:

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address
*/