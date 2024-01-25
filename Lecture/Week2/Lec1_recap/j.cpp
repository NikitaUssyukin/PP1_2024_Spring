#include <iostream>

using namespace std;

int main() {
    
    bool b; // used to store either true or false (1 or 0)
    char c; // used to store singular characters (e.g 'a', '+', '@', etc)
    string s; // used to store sequences of charaters (e.g. "Hello!")

    b = true; // b = 1; will also work
    c = 'A'; // singular quotes represent a char
    s = "Arman"; // double quotes indicate a string

    cout << b << endl;
    cout << c << endl;
    cout << s << endl;

    return 0;
}