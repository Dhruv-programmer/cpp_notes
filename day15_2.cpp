// C++ Templates with multiple parameters
#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
class sample{
    T1 data1;
    T2 data2;
    T3 data3;
public:
    sample(T1 a, T2 b, T3 c){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void showData(){
        cout << data1 << endl
             << data2 << endl
             << data3;
    }
};
int main(){
    sample <char,float,int> A('@',9.909,68);
    A.showData();
    return 0;
}