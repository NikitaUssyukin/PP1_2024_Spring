#include <iostream>

using namespace std;

int main() {
    int N, reversed = 0;

    cin >> N;

    int multiplier = 100; // assume that we can only get 3 digit numbers

    while(N > 0) {
        reversed += N % 10 * multiplier;
        N /= 10;
        multiplier /= 10;
    }

    cout << reversed << endl;

    return 0;
}