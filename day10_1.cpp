// multiple inheritance
// syntax for multiple inheritance:
// class Derived: visibility-mode base1, visibility-mode base2
// {
//      Definition of class "Derived"
// };
#include <iostream>
using namespace std;
class b1
{
protected:
    int b1;

public:
    void setb1(int a)
    {
        b1 = a;
    }
};
class b2
{
protected:
    int b2;

public:
    void setb2(int a)
    {
        b2 = a;
    }
};
class derived : public b1, public b2
{
public:
    void show()
    {
        cout << "sum of " << b1 << " and " << b2 << " is " << b1 + b2;
    }
};
int main()
{
    derived x;
    x.setb1(3);
    x.setb2(77);
    x.show();
    return 0;
}