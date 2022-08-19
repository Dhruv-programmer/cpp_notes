// parameterized constructor
#include <iostream>
#include <math.h>
using namespace std;
class point
{
    double x;
    double y;
    friend void dist(point, point);

public:
    point(double, double); // Constructor declaration
};
point::point(double a, double b) // ----> This is a  parameterized constructor
{
    x = a;
    y = b;
}
void dist(point a, point b) // function to find distance between two points
{
    cout << "distance = " << sqrt(pow((a.x - b.x), 2.0) + pow((a.y - b.y), 2.0));
}
int main()
{
    // Implicit call
    point one(1, 0);
    // Explicit call
    point two = point(70, 0);
    dist(one, two);
    return 0;
}
