#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 1, b = 1;

    cout << ++a << endl; 
    // a += 1
    // a
    cout << a << endl;

    cout << b++ << endl; 
    // b
    // b += 1
    cout << b << endl;
    
    
    // a = 2, b = 2


    cout << a++ + ++b << endl; 

    cout << a + b << endl;

    return 0;
}