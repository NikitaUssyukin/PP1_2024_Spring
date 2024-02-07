#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if(n <= k) {
        cout << 2 << endl;
        return 0; // stops the program
    }

    n *= 2; // same as n = n * 2;
    // converting from steaks to sides of the steaks

    cout << (n + n % k) / k << endl;

    // 12 7
    // 24 sides
    // 24 + 24 % 7 = 27
    // n / k 

    return 0;
}