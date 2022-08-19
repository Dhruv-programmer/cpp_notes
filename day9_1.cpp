// Inheritance in C++
#include <iostream>
using namespace std;
class Employee
{ // Base Class
public:
    int id;
    float salary;
    Employee()
    {
        id = 1;
        salary = 1000.0;
    }
    Employee(int inpId)
    {
        id = inpId;
        salary = 1000.0;
    }
};
// Creating a Manager class derived from Employee Base class
class Manager : private Employee
{
    int experience;

public: // Derived Class syntax
    Manager(int a, int b, float c)
    {                   // class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
        id = a;         // {
        experience = b; //     class members/methods/etc...
        salary = c;     // }
    }
    void showData()
    {
        cout << "Id: " << id;
        cout << " Experience: " << experience;
        cout << " Salary: " << salary << endl;
    }
};
int main()
{
    Manager bill(1, 5, 1000), mark(2, 4, 500), sundar(3, 3, 250);
    bill.showData();
    mark.showData();
    sundar.showData();
    return 0;
}
// If the base class constructor does not have any arguments, there is no need for any constructor in the derived class
// But if there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor

/*
Note:
    Default visibility mode is private
    Public Visibility Mode: Public members of the base class becomes Public members of the derived class
    Private Visibility Mode:Public members of the base class becomes Private members of the derived class
****Private members of base class are never inherited***
*/