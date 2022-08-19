// Abstract Base Class & Pure Virtual Functions in C++ 

// A *pure virtual function* (or abstract function) in C++ is a virtual function for which 
// we can have implementation, But we must override that function in the derived class.
// A class is abstract if it has at least one pure virtual function. 
#include <iostream>
using namespace std;
class base{
    public:
    void virtual display()=0;
};
class derived : public base{
    public:
    void display(void){
        cout<<"Hello World!!";
    }
};
int main(){
    //  We cannot create objects of abstract classes.
    // base a; This throws an error 
    base *x = new derived;
    x->display();
    delete x;
    return 0 ; 
}