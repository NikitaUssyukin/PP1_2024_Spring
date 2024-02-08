#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int b[m];

    for(int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    int c[n + m];

    for(int i = 0; i < n; ++i) {
        c[i] = a[i];
    }

    for(int i = n; i < n + m; ++i) {
        c[i] = b[i - n];
    }

    sort(c, c + n + m);

    for(int i = 0; i < n + m; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}