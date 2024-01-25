#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int bit1, bit2, bit3, bit4;

    bit4 = N % 2;
    N /= 2; // identical to N = N / 2;

    bit3 = N % 2;
    N /= 2;

    bit2 = N % 2;
    N /= 2;

    bit1 = N % 2;
    N /= 2;

    cout << bit4 * 8 + bit3 * 4 + bit2 * 2 + bit1 * 1 << endl;

    return 0;
}