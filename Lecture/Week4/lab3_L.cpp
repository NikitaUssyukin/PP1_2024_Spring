#include <iostream>

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

    int i = 0, j = 0;

    /*
                i
    a: 4 5 6 7 10
                 j
    b: 2 4 6 7 8 
    */

    while(i < n && j < m) {
        if(a[i] < b[j]) {
            c[i + j] = a[i];
            ++i;
        }
        else{
            c[i + j] = b[j];
            ++j;
        }
    }

    cout << i << " " << j << endl;

    // figure out why it does not work!
    // if(i == n) {
    //     while(i + j < n + m) {
    //         c[i + j] == b[j];
    //         ++j;
    //     }
    // } else {
    //     while(i + j < n + m) {
    //         c[i + j] == a[i];
    //         ++i;
    //     }
    // }

    c[i + j] = a[i];

    for(int i = 0; i < n + m; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;

    /*
    5
    4 5 6 7 10
    5
    2 4 6 7 8
    */

    /*
    2 4 4 5 6 6 7 7 8 10
    */


    return 0;
}