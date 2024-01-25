#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;
    
    if(a > 0) {
        if(a % 2 == 0 && a % 3 == 0) {
            cout << a << " is positive, even and divisible by 3!\n"; // \n does the same as endl
        }
        else if(a % 2 == 0) {
            cout << a << " is positive and even!\n";
        }
        else {
            cout << a << " is positive and odd!\n";
        }
    }
    
    return 0;
}