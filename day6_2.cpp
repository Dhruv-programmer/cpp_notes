// Passing objects as arguments into the function
#include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    static int num; // stores number of complex numbers(or, objects) made.
public:
    complex()
    {
        num++;
    }
    complex(int a, int b)
    {
        real = a;
        imag = b;
        num++;
    }
    void getcomp()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    void setSumOfComp(complex o1, complex o2)
    {
        real = o1.real + o2.real;
        imag = o1.imag + o2.imag;
    }
    static void getnum()
    {
        cout << "Total complex numbers made in this program is " << num << endl;
    }
};
int complex ::num;
int main()
{
    complex one(3, 4), two(12, 9), three;
    one.getcomp();
    two.getcomp();
    three.setSumOfComp(one, two);
    three.getcomp();
    complex::getnum();
    return 0;
}