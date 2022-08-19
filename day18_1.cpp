// Stack Unwinding in C++
/* In C++, when an exception occurs, the function call stack is linearly searched for the 
exception handler, and all the entries before the function with exception handler are 
removed from the function call stack. So exception handling involves Stack Unwinding if 
exception is not handled in same function (where it is thrown). */
#include <iostream>
using namespace std;
void func1(){
    cout<<"Entering func1"<<endl;
    throw 99;
    cout<<"Exiting func1"<<endl;
}
void func2(){
    cout<<"Entering func2"<<endl;
    func1();
    cout<<"Exiting func2"<<endl;
}
void func3(){
    cout<<"Entering func3"<<endl;
    try
    {
        func2();
    }
    catch(int a)
    {
    cout<<"Exception catch: "<<a<<endl;
    }
    cout<<"Exiting func3"<<endl;
}
int main(){
    func3();
    return 0 ;
}
// Note: The following code will not be executed:-
// Line7: cout<<"Exiting func1"<<endl; 
// Line12: cout<<"Exiting func2"<<endl;

// if there were some local class objects inside f1() and f2(), destructors for those 
// local objects would have been called in Stack Unwinding process.
