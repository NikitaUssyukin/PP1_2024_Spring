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

    cout << ceil(double(n) / double(k)) << endl;

    return 0;
}