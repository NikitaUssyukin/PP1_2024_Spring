#include <iostream>

using namespace std;

int main() {
    int N;

    cin >> N;

    int b1, b2, b3, b4;

    b4 = N % 2;
    N /= 2; // the same as N = N / 2;

    b3 = N % 2;
    N /= 2;

    b2 = N % 2;
    N /= 2;

    b1 = N % 2;
    N /= 2;

    cout << b1 << b2 << b3 << b4 << endl;

    cout << b4 * 8 + b3 * 4 + b2 * 2 + b1 * 1 << endl;

    return 0;
}