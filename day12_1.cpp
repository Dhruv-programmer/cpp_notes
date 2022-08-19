//Constructor in derived class
#include <iostream>
using namespace std;
class base1{
    protected:
    int x;
    public:
    base1(int a){
        x = a;
        cout<<"Constructor of base1 invoked"<<endl;
    }
};
class base2{
    protected:
    int y;
    public:
    base2(int a){
        y = a;
        cout<<"Constructor of base2 invoked"<<endl;
    }
};
class derived : public base2,public base1{ 
//Note: The order in which constructor of base classes are invoked is same as the order in which they are inherited. (Line 22)

    int z;
    public:
    derived(int a,int b,int c): base1(a),base2(b){
        z =  c;
        cout<<"Constructor of derived invoked"<<endl;
    }
    void display(){
        cout<<"value of x is "<<x<<endl;
        cout<<"value of y is "<<y<<endl;
        cout<<"value of z is "<<z<<endl;
    }
};
int main(){
    derived obj(1,2,3);
    obj.display();
    return 0 ;
}
