//****File Handling through C++ Classes****
// In C++, files are mainly dealt by using three classes fstream, ifstream, ofstream available in fstream headerfile. 
// ofstream: Stream class to write on files 
// ifstream: Stream class to read from files
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // >> is used to read a file 
    // << is used to write a file 
    string b;
    string a = "Hello World!!";
    // Opening files using constructor and writing it
    ofstream txt("sample.txt"); // Write operation
    txt << a;
    // disconnecting our file 
    txt.close();
    // Opening files using constructor and reading it
    ifstream get("text.txt"); // Read operation
    // get >> b;// reads only a single word 
    getline(get, b);          // getline reads a line from stream into a string.
    cout << b;
    // disconnecting our file
    get.close();
    return 0; 
}