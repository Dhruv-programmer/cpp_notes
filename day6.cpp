// static members and static function member

// A static member is shared by all objects of the class. All static data is initialized to
// zero when the first object is created, if no other initialization is present. We can't put it in the
// class definition but it can be initialized outside the class as done in the following example by
// redeclaring the static variable, using the scope resolution operator :: to identify which class it belongs to.

// by declaring a function member as static, you make it independent of any particular object of the class.
// A static member function can be called even if no objects of the class exist and the static functions are
// accessed using only the class name and the scope resolution operator ::.
// A static member function can only access static data member, other static member functions
// and any other functions from outside the class.

#include <iostream>
using namespace std;
class Box
{
private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
public:
    static int objectCount; // static member

    // Constructor definition
    Box(double l, double b, double h = 2.0)
    {
        length = l;
        breadth = b;
        height = h;

        // Increase every time object is created
        objectCount++;
    }
    double Volume();
    static int getCount() // static member function
    {
        return objectCount;
    }
};

double Box::Volume()
{
    return length * breadth * height;
}

// Initialize static member of class Box
// int Box::objectCount = 0;

int main(void)
{
    // Print total number of objects before creating object.
    cout << "Inital Stage Count: " << Box::getCount() << endl;

    Box B1(3.2, 1.2, 1.5); // Declare box1
    Box B2(8.5, 6.1);      // Declare box2

    // Print total number of objects after creating object.
    cout << "Final Stage Count: " << Box::getCount() << endl;

    return 0;
}
