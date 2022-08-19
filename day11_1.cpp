// Virtual Base class
#include <iostream>
using namespace std;
class student{
protected:
    int roll;
public:
    void setRoll(int r){
        roll = r;
    }
    void getRoll(void){
        cout << "Roll No: " << roll << endl;
    }
};
class subject1 : virtual public student{
protected:
    int marks1;
public:
    void setMarks1(int m1){
        marks1 = m1;
    }
    void getMarks1(){
        cout << "Marks in Subject 1: " << marks1 << endl;
    }
};
class subject2 : public virtual student{
protected:
    int marks2;
public:
    void setMarks2(int m2){
        marks2 = m2;
    }
    void getMarks2(){
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};
class result : public subject1, public subject2{
protected:
    bool pass = ((marks1 + marks2) < 100) ? false : true;
public:
    void showResult(){
        getRoll();
        getMarks1();
        getMarks2();
        if (pass == true){
            cout << "Result: Pass" << endl;
        } else
            cout << "Result: Fail" << endl;
    }
};
int main(){
    result sam;
    sam.setRoll(1001);
    sam.setMarks1(51);
    sam.setMarks2(81);
    sam.showResult();
    return 0;
}