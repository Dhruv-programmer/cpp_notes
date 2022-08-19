#include <iostream>
using namespace std;
// A function prototype is a declaration of the function
// that tells the compiler about the type of the value returned
//  by the function and the number and type of arguments.
// for example:-
// void func(int,float,char);

// call by value
int sum(int a, int b)
{
    return (a + b);
}
// In call by value the value of actual arguments entered during function call
// get copied into the formal arguments of the function. Hence, any change in
// values of formal arguments will NOT be reflected into the actual arguments.

//  Call by reference using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Call by reference using reference variables
void swapRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// default arguments
void print(int a, const int *ptr, int b = 8)
{
    cout << "a is " << a << " b is " << b;
}
// use const if you dont want to accidently change the value of an argument.
// here if the value of b is not passed into the function then
// it will consider b as 8 otherwise the input value will be considered.
// Remember that default values are added only after names of other arguments
// void print(int b = 8 ,int a); //This will throw error during call
int main()
{
    int x = 22, y = 38;
    cout << "The sum of x and y is " << sum(x, y) << endl;
    cout << "The value of x and y before swapping is " << x << " " << y << endl;
    swap(&x, &y);
    cout << "The value of x and y after swapping is " << x << " " << y << endl;
    cout << "The value of x and y before swapping is " << x << " " << y << endl;
    swapRef(x, y);
    cout << "The value of x and y after swapping is " << x << " " << y << endl;
    return 0;
}
// inline function
/* C++ provides an inline functions to reduce the function call
 overhead. Inline function is a function that is expanded in line
 when it is called. When the inline function is called whole code
  of the inline function gets inserted or substituted at the point
  of inline function call. This substitution is performed by the
   C++ compiler at compile time
*/
inline void func(int a, int b){
    cout << a + b << endl;
}
// usually if the code in function is small only then inline
// functions are used, so as to increase speed bcoz it takes a lot of memory
// to declare a function as inline if code inside function defination is big.
/* Remember, inlining is only a request to the compiler, not a
command. Compiler can ignore the request for inlining.
Compiler may not perform inlining in such circumstances like:
1) If a function contains a loop. (for, while, do-while)
2) If a function contains static variables.
3) If a function is recursive.
4) If a function return type is other than void, and the return statement doesn’t exist in function body.
5) If a function contains switch or goto statement.*/