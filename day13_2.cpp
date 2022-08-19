// Pointers to Objects and Arrow Operator 
#include <iostream>
using namespace std;
class sample{
    int a,b;
    public:
    sample(void){}
    sample(int x,int y){
        a = x;
        b = y;
    }
    void showSum(){
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    }
};
int main(){
    sample a(4,7);
    sample *p = &a;
    (*p).showSum(); 
    sample *ptr = new sample(10,13); 
    // The Arrow(->) operator exists to access the members of the structure,unions or objects using pointers.
    (ptr)->showSum();  //It is equivalent to (*ptr).showSum();
    delete p;
    delete[] ptr;
    return 0 ;
}