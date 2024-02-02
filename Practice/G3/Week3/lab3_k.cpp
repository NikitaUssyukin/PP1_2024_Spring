// INCOMPLETE SOLUTION
#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int a[10000];

    for(int i = 0; i < n;) {
        cin >> a[i];
        if(i != 0) {
            if(a[i] != a[i - 1]) {
                ++i;
            } else {
                --n;
            }
        }
    }

    cout << n << endl;

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}