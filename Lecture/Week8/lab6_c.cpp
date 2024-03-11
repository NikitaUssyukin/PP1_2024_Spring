#include <iostream>
#include <string>
using namespace std;

int countEquals(int a[], int b[], int n) {
    int cnt = 0;

    int a_cnt[101] = {}; // "= {}" makes all elements 0, i.e. fills the array with 0-s
    int b_cnt[101] = {};

    for(int i = 0; i < n; ++i) {
        a_cnt[a[i]]++;
        b_cnt[b[i]]++;
    }

    for(int i = 0; i < 101; ++i) {
        cnt += min(a_cnt[i], b_cnt[i]);
    }
    
    return cnt;
}



int main(){
    int n;
    cin >> n;

    int a[n];
    int b[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    cout << countEquals(a, b, n) << endl;

    return 0;
}
