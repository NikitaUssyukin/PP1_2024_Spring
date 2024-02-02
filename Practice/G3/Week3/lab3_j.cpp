#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int i = 0;
    while(a[i] < m && i < n) {
        ++i;
    }

    cout << i << endl;

    return 0;
}