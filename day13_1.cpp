// new and delete operators in C++ for dynamic memory
#include <iostream>
using namespace std;
int main()
{
    // The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available,
    // new operator initializes the memory and returns the address of the newly allocated and initialized
    // memory to the pointer variable.

    // Request memory for the variable using new operator
    int *ptr = new int(20);
    cout << "Value of ptr: " << *ptr << endl;
    // Request block of memory
    int *q = new int[4];
    for (int i = 0; i < 4; i++)
        q[i] = i + 1;

    cout << "Value store in block of memory: ";
    for (int i = 0; i < 4; i++)
        cout << q[i] << " ";

    // freed the allocated memory
    delete ptr;

    // freed the block of allocated memory
    delete[] q;
}
