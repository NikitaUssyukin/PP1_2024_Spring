// Loops: for, while and do while

#include <iostream>

using namespace std;

int main() {
    // calculating the sum of 5 numbers
    int lim;
    cin >> lim;

    for(int i = 0; i < lim; i += 2) {
        cout << i << endl;
    }

    return 0;
}