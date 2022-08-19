// Pointers to Derived Classes & Virtual Function in C++

// A virtual function is a member function which is declared within a base class and is re-defined(Overridden) by a 
// derived class. When you refer to a derived class object using a pointer or a reference of the base class, you can 
// call a virtual function for that object and execute the derived class’s version of the function. 
#include <iostream>
using namespace std;
class base{
public:
    int a;
    void show(void){
        cout << "Value of base class variable a is " << a << endl;
    }
    void virtual print(void) {cout<<"Inside Base Class"<<endl;}
};
class derived : public base{
public:
    int b;
    void show(void){
        cout << "Value of derived class variable b is " << b << endl;
    }
    void print(){cout<<"Inside Derived Class"<<endl;}
};
int main(){
    derived C, D;
    base *base_ptr = &D;//base class pointer Pointing to object of derived class 
    base_ptr->a = 29;
    // base_ptr->b= 134; // Will throw an error
    base_ptr->show();
    base_ptr->print();
    derived *derived_ptr = &C;
    derived_ptr->b = 48;
    derived_ptr->show();
    return 0;
}

// So, we can point a base class pointer to object of derived class but it can only access members of 
// the base class except when a virtual function exists.

// The main thing to note here is that if we don’t use the “virtual” keyword with the “print” function of the base
// class then the “print” function of the base class will be invoked by base_ptr->print();

// But we have used the "virtual” keyword with the “print” function of the base class to make it a virtual function 
// so when the print function is called by using the base class pointer the print function of the derived class 
// will be invoked because the base class pointer is pointing to the derived class object.

// when we point a derived class pointer to derived class object ,it can access members of both derived class object
//  and base class object but when a member function of base class is Overridden in derived class,
//then the derived class pointer will give more preference to derived class members as compared to base class members

// *****Rules for virtual functions:-*****

// Virtual functions cannot be static.

// A virtual function can be a friend function of another class.

//Virtual functions should be accessed using pointer or reference of base class type to achieve run time polymorphism.

// The prototype of virtual functions should be the same in the base as well as derived class.

// They are always defined in the base class and overridden in a derived class. 

// It is not mandatory for the derived class to override (or re-define the virtual function), in that case, 
// the base class version of the function is used.

// A class may have virtual destructor but it cannot have a virtual constructor.

