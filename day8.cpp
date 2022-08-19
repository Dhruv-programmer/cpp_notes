// Constructors with default arguments
#include <iostream>
using namespace std;
class cylinder
{
    int radius;
    int height;

public:
    cylinder(){} // default constructor 
    cylinder(int, int);
    void print();
};
cylinder::cylinder(int a, int b = 5)
{
    radius = a;
    height = b;
}
void cylinder::print()
{
    cout << "radius = " << radius << " height = " << height << endl;
}
int main()
{
    cylinder a(10, 13),b;
    b = cylinder(4);
    a.print();
    b.print();
    return 0;
}
//in line 25 we have declared an object b without any argument.
// this would have thrown an error if default constructor(line 10) was not present.