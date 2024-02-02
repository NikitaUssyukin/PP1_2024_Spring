#include <iostream>

using namespace std;

int main() {
    // example how to calculate zeroes in one number
    int a;
    cin >> a;

    int cnt = 0;

    while(a > 0) {
        if(a % 10 == 0) {
            ++cnt;
        }
        a /= 10;
    }

    cout << cnt << "\n";

    return 0;
}