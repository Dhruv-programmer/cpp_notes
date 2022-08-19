// Protected Access Modifiers

// Protected access modifier is similar to private access modifier in the sense that it can't be accessed
// outside of it's class unless with the help of friend class, the difference is that the class members declared
// as Protected can be accessed by any subclass(derived class) of that class as well.
#include <iostream>
using namespace std;
class base
{
protected:
    int a = 6;

public:
    int b = 5;
};
class derived : public base
{
};
int main()
{
    base w;
    // cout<<w.a; //these will cause error as a is protected.
    derived x;
    // cout<<x.a; //these will cause error as class is derived in protected mode.
    // cout<<x.b;
    return 0;
}
/*
                            Public Visibility mode     	Private Visibility mode   	Protected Visibility mode
Private members           	Not Inherited              	Not Inherited              	Not Inherited
Protected members           Protected                    Private                    Protected
Public members           	Public	                     Private                    Protected

*/