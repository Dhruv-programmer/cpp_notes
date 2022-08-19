// Class Templates with Default Parameters
#include <iostream>
using namespace std;
template <class T1 = int ,class T2 = float ,class T3 = char>
class simple{
    T1 data1;
    T2 data2;
    T3 data3;
    public:
    simple(T1 a , T2 b , T3 c){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print(void){
        cout<<"The value of data1 is "<<data1<<endl;
        cout<<"The value of data2 is "<<data2<<endl;
        cout<<"The value of data3 is "<<data3<<endl
            <<endl;
    }
};
int main(){
    simple <> A(2,3.3,'#');
    A.print();
    simple <float,char,char> B(9.9,'*','$');
    B.print();
    return 0 ;
}
