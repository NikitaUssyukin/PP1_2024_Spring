#include <iostream>

using namespace std;

int main() {
    int N;

    cin >> N;

    while(N > 0) {
        cout << N % 10;
        N /= 10;
    }

    cout << endl;

    return 0;
}