//program using a stringstream to convert string to int
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    string str = "230022";
    int x=0;
    stringstream s(str);
    s>>x;
    cout<<"The value of x is : "<<x;
    return 0 ;
}