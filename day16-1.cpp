// Member Function Templates & Overloading Template Functions
#include <iostream>
using namespace std;
template <class T>
class sample{
    T data;
public:
    sample(T a){
        data = a;
    }
    void display();
};
template <class T>
void sample<T>::display(){
    cout << "The value of data is " << data << endl;
}

void show(int a) { cout << "show function is invoked" << endl; }

template <class T>
void show(T a) { cout << "show function using template is invoked " << endl; }

int main()
{
    // sample<int> A(4);
    // A.display();
    show(4); // Exact match takes the highest priority
    show('#');
    return 0;
}