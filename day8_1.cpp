// copy constructor
#include <iostream>
using namespace std;
class Number{
    int a;
public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }
    // Creating a copy constructor 
    Number(Number &obj){
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }
    void display(){
        cout << "The number for this object is " << a << endl;
    }
};// When no copy constructor is found, compiler supplies its own copy constructor.
int main()
{
    Number x, y, z(39), z2;
    //Note: we have declared objects x,y,z without any arguments; therefore it is necessary 
    // to create a default constructor in the class definition
    x.display();
    y.display();
    z.display();
    Number z1(z); // Copy constructor invoked
    z1.display();
    z2 = z; // Copy constructor not invoked
    z2.display();
    Number z3 = z; // Copy constructor invoked
    z3.display();
    return 0;
}
// 1st objects "x", "y", "z", and "z1" are created of the "number" data type.
// The main thing to note here is that the object "z" has a value "39".
// 2nd function "display" is called by the objects "x", "y", and "z".
// 3rd copy constructor is invoked and the object "z" is passed to "z1"
// 4th function "display" is called by the object "z1"
// 5th the value of "z" is assigned to "z2".
// The main thing to note here is that it will not invoke a copy constructor because the object "z2" is already created.
// 6th function "display" is called by the object "z2"
// 7th the value of "z" is assigned to "z3".
// The main thing to note here is that it will invoke a copy constructor because the object "z3" is being created.
// 8th function "display" is called by the object "z3"