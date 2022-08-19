#include <iostream>
#include <iomanip>
using namespace std;
int a = 100; // a is global variable
int main()
{
    // '<<' is called insertion operator, used to give output
    // '>>' is called extraction operator, used to take input from user
    //for new line use \n or <<endl
    int a = 50;//local variable 
    int c = 990;
    // cin >> a;
    // cout << "The local variable is " << a << endl;
    // cout << "The global variable is " << ::a << endl;
    //  "::" is scope resolution operator

    //CPP compilar by default considers all real numbers containing decimal part as
    //double NOT float
    // cout << "The size of 3.56 is " << sizeof(3.56) << endl;
    // cout << "The size of 3.56f is " << sizeof(3.56f) << endl;
    // cout << "The size of 3.56F is " << sizeof(3.56F) << endl;
    // cout << "The size of 3.56l is " << sizeof(3.56l) << endl;
    // cout << "The size of 3.56L is " << sizeof(3.56L) << endl;

    //reference variables
    int &b = a;
    //cout << b; // therefore b refers to the variable a
    
    //typecasting
    float x = 6.778;
    cout << "the value of x " << x << endl;
    cout << "the value of (int)x " << (int)x << endl;
    cout << "the value of int(x) " << int(x) << endl;

    //manipulators in c++
    //endl is a popular manipulator
    //setw is manipulator from iomanip library.
    //setw accepts int as argument and set field weidth accordingly.
    cout << " The value of a :" << a << endl;
    cout << " The value of b :" << b << endl;
    cout << " The value of c :" << c << endl
         << endl;
    cout << " The value of a after using setw :" << setw(3) << a << endl;
    cout << " The value of b after using setw :" << setw(3) << b << endl;
    cout << " The value of c after using setw :" << setw(3) << c << endl;
}