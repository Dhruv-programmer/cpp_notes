// Program for practice of inheritance
#include <iostream>
#include <math.h>
using namespace std;
class calculator
{
protected:
    int a, b;

public:
    void getnum()
    {
        cout << "enter two numbers" << endl;
        cin >> a;
        cin >> b;
    }
    void show(void);
};
class scientificCal
{
protected:
    int c, d;

public:
    void getdata()
    {
        cout << "enter two numbers" << endl;
        cin >> c;
        cin >> d;
    }
    void showData(void);
};
class hybrid : public calculator, public scientificCal
{
public:
    void operation();
};
int main()
{
    hybrid num;
    num.operation();
    return 0;
}
void calculator ::show(void)
{
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
}
void scientificCal ::showData(void)
{
    cout << "sin " << c << " = " << sin(c) << endl;
    cout << "sin " << d << " = " << sin(d) << endl;
    cout << "cos " << c << " = " << cos(c) << endl;
    cout << "cos " << d << " = " << cos(d) << endl;
    cout << "tan " << c << " = " << tan(c) << endl;
    cout << "tan " << d << " = " << tan(d) << endl;
}
void hybrid ::operation()
{
    getnum();
    show();
    getdata();
    showData();
}