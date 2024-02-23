#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int b[1001] = {}; // = {} fills an array with 0s
    // works only when we know the size of the array before the start of the program
    // so, it doesn't work with a[n]

    for(int i = 0; i < n; ++i) {
        ++b[a[i]];
    }

    // for(int i = 0; i < n; ++i) {
    //     cout << b[i] << " ";
    // }

    int max_b = 0;
    for(int i = 0; i < 1001; ++i) {
        if(b[i] > max_b) {
            max_b = b[i];
        }
    }

    for(int i = 1000; i >= 0; --i) {
        if(b[i] == max_b) {
            cout << i << " ";
        }
    }

    /*
    10
    1 2 2 9 8 9 6 6 7 6

    0 0 0 0 0 0 0 0 0 0
i = 0 1 2 3 4 5 6 7 8 9  

    0 1 2 0 0 0 3 1 1 2
i = 0 1 2 3 4 5 6 7 8 9  
    */

    return 0;
}