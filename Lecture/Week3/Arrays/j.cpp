// Algorithm library

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // example of using sort
    sort(a, a + n);
    
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}