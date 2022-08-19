//Operator overloading in C++
#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;
public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }
    // This is automatically called when '+' is used with
    // between two Complex objects
    complex operator+(complex &comp)
    {
        complex c;
        c.real = real + comp.real;
        c.imaginary = imaginary + comp.imaginary;
        return c;
    }
    void display(){cout << real << " + " << imaginary << "i" << endl;}
};
int main(){
    complex a(4, 3), b(15, 99);
    complex c = a + b;
    c.display();
    return 0;
}