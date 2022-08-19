// C++ Templates
#include <iostream>
using namespace std;
template <class T>
class rectangle{
    T length,breadth;
    public:
    rectangle(T a,T b){
        length = a;
        breadth = b;
    }
    T area(){ return length*breadth; }
};
int main(){
    rectangle <float> A(2.519,20.54);
    cout<<A.area()<<endl;
    return 0 ;
}





