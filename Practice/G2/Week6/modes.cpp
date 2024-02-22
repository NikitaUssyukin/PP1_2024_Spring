#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int b[1001] = {}; // = {} fills the array with 0s if the size is fixed

    // for(int i = 0; i < n; ++i) {
    //     b[i] = 0;
    // }

    for(int i = 0; i < n; ++i) {
        b[a[i]]++;
    }

    int max = 0;
    for(int i = 0; i < 1001; ++i) {
        if(b[i] > max) {
            max = b[i];
        }
    }
    //cout << max;

    for(int i = 1000; i >= 0; --i) {
        if(b[i] == max) {
            cout << i << " ";
        }
    }

    /*
    10
    1 2 2 9 8 9 6 6 7 6

    begin:
    0 0 0 0 0 0 0 0 0 0 
i = 0 1 2 3 4 5 6 7 8 9 

    end:
    0 1 2 0 0 0 3 1 1 2 
i = 0 1 2 3 4 5 6 7 8 9 

    6
    */

    return 0;
}