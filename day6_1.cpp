//Static Data Members & Methods
// array of objects
#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;
    static int objectCount; // static member

public:
    void setData()
    {
        cout << "Enter the id of employee: ";
        cin >> id;
        cout << "Enter the salary of this employee: ";
        cin >> salary;
        objectCount++;
    }
    void getData();
    static void objectsnum()
    { // static member function
        cout << "Total objects : " << objectCount;
    }
};
int employee::objectCount; // default value of static variables is zero
void employee ::getData()
{
    cout << "Employee Id: " << id << " Salary: " << salary << endl;
}
int main()
{
    employee google[3];
    for (int i = 0; i < 3; i++)
    {
        google[i].setData();
    }
    for (int i = 0; i < 3; i++)
    {
        google[i].getData();
    }
    employee ::objectsnum();
    return 0;
}