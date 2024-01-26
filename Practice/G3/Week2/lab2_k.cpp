#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;

    cin >> N;

    int n = 1;

    while(n <= N) {
        int a = sqrt(n);

        if(a * a == n) {
            cout << n << endl;
        }

        ++n;
    }

    return 0;
}