#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;
    
    if(a > 0) {
        if(a % 2 == 0) {
            cout << a << " is positive and even!\n"; // \n does the same as endl
        }
        else {
            cout << a << " is positive and odd!\n";
        }
    }
    else if(a < 0) {
        if(a % 2 == 0) {
            cout << a << " is negative and even!\n"; // \n does the same as endl
        }
        else {
            cout << a << " is negative and odd!\n";
        }
    }
    else {
        if(a % 2 == 0) {
            cout << a << " is 0\n"; 
        }
    }

    return 0;
}