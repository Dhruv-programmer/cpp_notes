// Exception handling and object destruction
#include <iostream>
using namespace std;
class sample1 {
public:
  sample1() { cout << "Constructing an Object of sample1" << endl; }
  ~sample1() { cout << "Destructing an Object of sample1" << endl; }
};
class sample2 {
public:
  // constructor which throws an exception
  sample2() { cout << "Constructing an Object of sample2" << endl; 
            throw 20; }
  ~sample2() { cout << "Destructing an Object of sample2" << endl; }
};
int main() {
  try {
    sample1 t1;  // Constructed and destructed
    sample2 t2;  // Partially constructed
    sample1 t3;  // t3 is not constructed as this statement never gets executed
  } catch(int x) {
    cout << "Caught " << x << endl;
  }
}
// Destructors are only called for the completely constructed objects. When constructor of an object throws an
//  exception, destructor for that object is not called.

