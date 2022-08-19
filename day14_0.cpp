// 'this' pointer in C++
// 'this' pointer points to the object which calls the member function. 
#include <iostream>
using namespace std;
class X{
    int a,b;
    public:
    void setData(int a, int b){ 
        // The 'this' pointer is used to retrieve the object's a and b
        // hidden by the local variables 'a' and 'b'
        this->a = a;
        this->b = b;
    }
    void showData(void){ cout<<"a = "<<a<<" b = "<<b<<endl; }
};
int main(){
    X sample;
    sample.setData(4,5);
    sample.showData();
    return 0 ;
}