#include <iostream>

using namespace std;

int main() {
    int size = 10000; // here we know the size of the array
    int a[size] = {}; // so by typing "= {}" we fill the array with zeroes

    // example of how you can use that in code:
    int n;
    cin >> n;

    int cnt = 0;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        while(a[i] > 0) {
            if(a[i] % 10 == 0) {
                ++cnt;
            }
            a[i] /= 10;
        }
    }
    cout << cnt << "\n";

    return 0;
}