#include <iostream>
using namespace std;
int main()
{
    // constants in c++
    const int con = 23;
    // As con is a constant; its value cannot be manipulated.
    
    // if else statements
    float num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
    {
        cout << num << " is a negative real number " << endl;
    }
    else
    {
        cout << num << " is a positive real number " << endl;
    }

    // Switch case statements
    // **NOTE** If "break;" is not used in a case then the
    //correct case, along with all the cases below it will get
    //executed .
    //If none of the cases are correct then default statement(if present) is printed.
    int x = 99;
    //only int and char type are allowed inside switch statement
    switch (x)
    {
    case 23:
        cout << "Twenty three " << endl;
        break;
    case 0:
        cout << "Zero";
        break;
    default:
        cout << "Default Case ";
    }

    //Pointers In C++
    int b = 2;
    int * ptr = &b;// ptr is a Pointer which stores address of variable b
    int **p = &ptr; // p contains address of pointer ptr
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<ptr<<endl;
    cout<<"The address of b is "<<*p<<endl;
    cout<<"The value at b is "<<b<<endl;
    cout<<"The value at b is "<<**p<<endl;
    cout<<"The value at b is "<<*ptr<<endl;
    cout<<"The value at b is "<<*(&b)<<endl;
    cout<<"The address of ptr is "<<&ptr<<endl;
    cout<<"The address of ptr is "<<p<<endl;
    // * is the dereferencing operator ; it gives value present at a address

    // Arrays and loops 
    // array is collection of items of similar data type present at contigious memory locations 
    int array[] = {11,22,33,44,55,66},n=0;
    
    // loops allow us to execute the same code multiple times 
    while(n<6)
    {
        cout<<"The value at array["<<n<<"] is "<<array[n]<<endl;
        n++;
    }
    // loops keep on executing the code again and again until the given 
    // conditions(here,n<6) remain true 

    do{
        cout<<"The value at array["<<n<<"] is "<<array[n]<<endl;
        n++;
    }while(n<=5);
    //Note: code written inside do-while loop is executed atleast once. 

    
    // structures are used to store items of different data types
    // typedef is used to change the name of any data type
    typedef struct student
    {
        int roll;  //size 4 bytes
        int reg;   //size 4 bytes
        char pass; //size 1 byte
    } stu;         //total size 9 byte
    stu dhruv;
    dhruv.roll = 30;
    dhruv.reg = 20106030;
    dhruv.pass = 'Y';
    
    //Unions are used when we want to use only one data type at a time
    //unions are used to save memory
    //memory allocated is the union of size of each variables in a union
    union stud
    {
        int roll;  //4 bytes
        int reg;   //4 bytes
        char pass; //1 byte
    };             // total size of union = 4

    //enums are used to improve readability of a program
    enum
    {
        morning,
        afternoon,
        evening,
        night
    };
    // Hence, morning is assigned as integer 0
    // and, afternoon is assigned as integer 1
    // and,   evening is assigned as integer 2
    // and,     night is assigned as integer 3

    cout << morning << endl;
    cout << afternoon << endl;
    cout << evening << endl;
    cout << night << endl
         << endl;

    return 0;
}