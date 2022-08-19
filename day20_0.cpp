// stringstream in C++ and its applications

// A stringstream associates a string object with a stream allowing you to read from the 
// string as if it were a stream.

// Basic methods are –
// clear() — to clear the stream
// str() — to get and set string object whose content is present in stream.
// operator << — add a string to the stringstream object.
// operator >> — read something from the stringstream object,

// Count number of words in a string
#include <iostream>
#include <bits/stdc++.h> //to use stringstream 
using namespace std;
int countWords(string str)
{
    stringstream s(str); // Used for breaking words
    string word; //to store individual words
    int num = 0; //to store number of words
    while(s>>word)
        num++;
    return num;
}
int main()
{
    string str = "C++ is a programming language.";
    cout<<"The number of words in string: "<<countWords(str);
    return 0 ;
}