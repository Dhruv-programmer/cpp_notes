//Function overloading
#include <iostream>
using namespace std;
int peri(int a)
{
    return 4 * a;
}
int peri(int a, int b)
{
    return 2 * (a + b);
}
int peri(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int a = 5, b = 8, c = 7;
    cout << "The perimeter of square with side " << a << " is " << peri(a) << endl;
    cout << "The perimeter of rectangle with sides " << a << " and " << b << " is " << peri(a, b) << endl;
    cout << "The perimeter of triangle with sides " << a << "," << b << " and " << c << " is " << peri(a, b, c) << endl;
    return 0;
}
//So we can declare more than one functions with same name,
//and the compiler will match function prototype itself and use the appropriate function.
