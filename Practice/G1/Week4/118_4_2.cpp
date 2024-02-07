#include <iostream>

using namespace std;

int main() {
    int N, reversed = 0;

    cin >> N;

    while(N > 0) {
        reversed *= 10;
        reversed += N % 10;
        N /= 10;
    }

    cout << reversed << endl;

    return 0;
}