#include <iostream>

using namespace std;

int main() {
    int a[10] = {}; // filling an array with 0s, works only if we know the size
    // before the start of the program

    for(int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}