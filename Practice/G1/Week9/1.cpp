#include <iostream>

using namespace std;

int main() {

    int a[1000] = {};

    int k;

    int i = 0;
    int x;
    while(cin >> k) {
        a[i++] = k;
        x = k;
    }

    i--;

    int b[1000];

    for(int j = 0; j < 1000; j++) {
        b[j] = j + 1;
    }

    for(int j = 0; j < i; j++) {
        b[a[j] - 1] = -1; 
    }

    // for(int j = 0; j < 1000; j++) {
    //     cout << b[j] << " ";
    // }

    // cout << endl;

    int l = 0;
    int cnt = 1;
    while(cnt <= x) {
        if(l > 999) {
            cout << -1 << endl;
            return 0;
        }
        if(b[l] == -1) {
            l++;
            continue;
        }
        l++;
        cnt++;
    }

    cout << b[l - 1] << endl;

    return 0;
}

/*
3 2 4 7 11
10

1 5 6 8 9 10 12 13 14 15 16 17 18 19 20...

15
*/