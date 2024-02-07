#include <iostream>

using namespace std;

int main() {
    int N, reversed = 0;

    cin >> N;

    int multiplier = 1;

    int N_copy = N;

    while(N_copy > 9) {
        multiplier *= 10;
        N_copy /= 10;
    } 

    while(N > 0) {
        reversed += N % 10 * multiplier;
        N /= 10;
        multiplier /= 10;
    }

    cout << reversed << endl;

    return 0;
}