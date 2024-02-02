#include <iostream>

using namespace std;

int main() {
    int n = 1000;
    int a[n];

    // example of what happens when you do not assign values 
    // to variables or elements of an array
    // before using it
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}