#include <iostream>

using namespace std;

int cnt = 0;

int linsearch(int a[], int n, int x) {
    for(int i = 0; i < n; ++i) {
        if(a[i] == x) {
            return i;
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

    cout << linsearch(a, n, x) << endl;
    cout << cnt << endl;

    return 0;
}