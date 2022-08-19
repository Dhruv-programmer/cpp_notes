// Multi-level inheritance example
#include <iostream>
using namespace std;
class student{
protected:
    int roll;
public:
    void set_roll(int a){
        roll = a;
    }
    void get_roll(){
        cout << "Roll No: " << roll;
    }
};
class exam : public student{
protected:
    int marks;
public:
    void set_marks(int a){
        marks = a;
    }
    void get_marks(){
        cout << " Marks: " << marks;
    }
};
class result : public exam{
    bool pass = marks < 33 ? false : true;
public:
    void get_result(){
    get_roll();
    get_marks();
    if (pass == false){
        cout << " Result: FAIL" << endl;
    }else{
        cout << " Result: PASS" << endl;
    }
}
};
int main(){
    result bill, mark;
    bill.set_roll(101);
    bill.set_marks(80);
    bill.get_result();
    return 0;
}

