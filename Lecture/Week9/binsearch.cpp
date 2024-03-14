#include <iostream>

using namespace std;

int cnt = 0;

int binsearch(int a[], int n, int x) {
    int l = 0;
    int r = n - 1;
    int m = r / 2;

    while(l <= r) {
        if(a[m] == x) {
            return m;
        }
        if(x < a[m]) {
            r = m - 1;
            m = (l + r) / 2;
        } else {
            l = m + 1;
            m = (l + r) / 2;
        }
        ++cnt;
    }
    return -1;
}


int main() {
    freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    cout << binsearch(a, n, x) << endl;
    cout << cnt << endl;

    return 0;
}