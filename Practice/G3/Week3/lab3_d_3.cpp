#include <iostream>

using namespace std;

int main() {
    // findind index of the first maximum element 
    int n;
    cin >> n;

    int a[n];

    int max_i;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    max_i = 0;

    for(int i = 0; i < n; ++i) {
        if(a[i] > a[max_i]) {
            max_i = i;
        }
    }

    cout << max_i << "\n";

    return 0;
}