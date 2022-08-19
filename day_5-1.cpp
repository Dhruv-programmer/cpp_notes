#include <iostream>
using namespace std;
class binary
{
    // private:"By default all variables in a class are considered private if not mentioned"
    string num;

public:
    void get_num();
    void check_binary();
    void display();
};
void binary ::get_num()
{
    cout << "Enter the number: ";
    cin >> num;
}
void binary ::display()
{
    cout << num ;
}
void binary ::check_binary()
{
    bool temp = true;
    get_num(); // nested member function
    display(); // nested member function
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) != '0' && num.at(i) != '1')
        {
            cout << " is not a binary number" << endl;
            temp = false;
            break;
        }
    }
    if (temp)
        cout << " is a binary number" << endl;
}
int main()
{
    binary dash;
    dash.check_binary();
    return 0;
}
/*
-> C++ language was initially named as C with classes because C++ language was almost,
   the same as C language but they added a new concept of classes in it.
-> Classes are the extension of structures in C language.
-> Structures had limitations such as; members are public and there were no methods.
-> Classes have some additional features than structures such as; classes can have methods and properties.
-> Classes have a feature to make class members as public and private.
-> In C++ objects can be declared along with class deceleration as shown below:
class Employee{
            / Class definition
} Charlie, Bill, Warren;

***Objects Memory Allocation in C++***
The way memory is allocated to variables and functions of the objects is different even
though they both are from the same class.
The memory is only allocated to the variables of the class when the object is created.
The memory is not allocated to the variables when the class is declared. At the same time,
single variables can have different values for different objects, so every object has an
individual copy of all the variables of the class. But the memory is allocated to the
function only once when the class is declared. So the objects don’t have individual
copies of functions only one copy is shared among each object.
*/