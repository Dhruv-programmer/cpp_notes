// File Handling in C++ using open() and eof() functions
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string s = "C++ is a programming language.\nIt is similar to C programming language.";
    ofstream output; 
    //connecting the object output to the text file using the member function open()
    output.open("sample.txt");
    output<<s;
    //closing the file connection
    output.close();
    ifstream input;
    //opening the text file into input
    input.open("sample.txt");
    // input>>s;   // it only reads a single word.
    // getline(input,s);  // it only reads a single line.

    // giving output the string lines by storing in s until the file reaches the end of it
    while(input.eof() == 0){  //it reads multiple lines 
        getline(input,s);
        cout<<s<<endl;
    }
    input.close();
    return 0 ;
}


