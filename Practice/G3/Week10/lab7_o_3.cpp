#include <iostream>
#include <algorithm>

using namespace std;

string to_k_inary(int n, int k) {
    int remainder;
    string remainder_s;

    if(n == 0) {
        return "";
    }
    
    remainder = n % k;
    if(remainder < 10) {
        remainder_s = char(remainder + '0');
    }
    else {
        remainder_s = char(remainder - 10 + 'A');
    }

    return to_k_inary(n / k, k) + remainder_s;
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