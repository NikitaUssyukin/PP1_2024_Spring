#include <iostream>
#include <algorithm>

using namespace std;

string to_k_inary(int n, int k) {
    string s;
    while(n > 0) {
        int remainder = n % k;
        n /= k;
        if(remainder < 10) {
            s += char(remainder + '0');
        }
        else {
            s += char(remainder - 10 + 'A');
        }
    }

    reverse(s.begin(), s.end());

    return s;
}

int main() {
    int n, k;
    cin >> n >> k;

    // for(int i = 0; i < 200; ++i) {
    //     cout << i << " " << char(i) << endl;
    // }

    cout << to_k_inary(n, k) << endl;

    return 0;
}