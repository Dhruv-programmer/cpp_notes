#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> vec(3,5);
    cout<<vec.empty();
    display(vec);
    return 0 ;
}