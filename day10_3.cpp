// Ambiguity Resolution in Inheritance in C++
// Ambiguity occurs when one class is derived for two or more base classes such that the base classes have functions with the same name.
// So it will confuse derived class to choose from similar name functions.
#include <iostream>
using namespace std;
class base1{
public:
    void print(void){
        cout << "C++ is a programming language." << endl;
    }
};
class base2{
public:
    void print(void){
        cout << "Java is a programming language." << endl;
    }
};
// Avoiding ambiguity using scope resolution operator
class derived1 : public base1, public base2{
public:
    void print(void){
        base1::print();
    }
};
class derived2 : public base1, public base2{
    // derived2's new print() method will override base class's print() method
public:
    void print(void){
        cout << "Python is a programming language." << endl;
    }
};
int main(){
    base1 a;
    base2 b;
    derived1 c;
    derived2 d;
    a.print();
    b.print();
    c.print();
    d.print();
    // Using scope resolution operator we can manually specify,
    // the path from which data member print will be accessed.
    c.base2::print();
    return 0;
}