// Array of Objects Using Pointers in C++
#include <iostream>
using namespace std;
class employee{
    int employeeId;
    int salary;
public:
    void setValues(int a, int b){
        employeeId = a;
        salary = b;
    }
    void printData(){
        cout<<"Employee Id: "<<employeeId<<" Salary = $"<<salary
        <<endl;
    }
};
int main(){
    int n = 3;
    employee* ptr = new employee [n];
    int i,a,b;
    for ( i = 0; i < n; i++){
        cout<<"Enter Employee Id: ";
        cin>> a;
        cout<<"Enter Employee Salary: ";
        cin>>b;
        (ptr+i)->setValues(a,b);
    }
    for ( i = 0; i < n; i++){
        (ptr+i)->printData();
    }
    delete[] ptr;
    return 0;
}