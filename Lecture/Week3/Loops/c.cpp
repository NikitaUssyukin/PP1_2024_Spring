// Loops: for, while and do while

#include <iostream>

using namespace std;

int main() {
    // calculating the sum of 5 numbers
    int sum = 0, a;

    int b;
    cin >> b;

    for(int i = 0; i < b; ++i) {
        cin >> a;
        sum += a;
    }

    cout << sum << endl;

    return 0;
}