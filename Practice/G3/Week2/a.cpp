// smallest natural divisor
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;

    cin >> N;

    int n = 2;

    while(true) {
        if(N % n == 0) {
            cout << n << endl;
            return 0;
        }

        ++n;
    }

    return 0;
}