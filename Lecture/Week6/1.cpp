#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "Hello";
    string s2("Hi");

    /*
    error examples
    string error1 = 's';
    string error2('s');
    string error3 = 22;
    string error4(22);
    */ 

    string s3; // you can create an empty string 
    s3 = 'c';  // and then assign a char to it
    string s4;  
    s4 = 97;   // or an int

    cout << s1 << " " << s2 << endl;
    cout << s3 << " " << s4 << endl;

    return 0;
}