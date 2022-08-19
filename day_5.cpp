#include <iostream>
using namespace std;
class data{
    //private variables can not be accessed outside the class.
    private:
    int a,b;
    //public variables can be accessed outside the class 
    public:
    int c,d;
    void setdata(int , int );
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
    }
};
void data :: setdata(int x , int y){
    a = x;
    b = y;
}
int main(){
    data first;
    //first.a = 5; --> This will throw an error as a is private variable 
    first.c = 10;
    first.d = 13;
    first.setdata(5,6);
    first.getdata();
    return 0;
}