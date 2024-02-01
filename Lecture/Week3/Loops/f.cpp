// Loops: for, while and do while

#include <iostream>

using namespace std;

int main() {
    // calculating the sum of 5 numbers
    int lim;
    cin >> lim;

    for(int i = 0, j = 0; i < lim || j < lim; i += 2, j += 5) {
        cout << i << " " << j << endl;
    }

    return 0;
}