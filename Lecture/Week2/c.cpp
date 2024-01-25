#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;
    
    if(a % 2 == 0) {
        cout << "Even!\n"; // \n does the same as endl
    }
    else {
        cout << "Odd!\n";
    }

    return 0;
}