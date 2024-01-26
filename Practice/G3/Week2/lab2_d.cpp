#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    if(n <= k) {
        cout << 2 << endl;
        return 0;
    }

    n *= 2; // same as n = n * 2;

    cout << (n + n % k) / k << endl;

    return 0;

    // 3 2 - 6 sides of steaks, 2 spots on the pan
    // 3


    // 13 7 - 26 sides of steaks, 7 spots on the pan;  
    // 4
    // 12 7
    // 24 7
    // 3
    // 3

    // 24 + 3 = 27

    // 26 / 7 = 3
    // 26 % 7 = 5
}