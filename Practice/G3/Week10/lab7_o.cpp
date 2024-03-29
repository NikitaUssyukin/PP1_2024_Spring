#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void to_k_inary(int n, int k) {
    vector<int> v;
    while(n > 0) {
        int remainder = n % k;
        n /= k;
        v.push_back(remainder);
    }

    reverse(v.begin(), v.end());

    'A';

    for(int i = 0; i < v.size(); ++i) {
        if(v[i] < 10) {
            cout << v[i];
        }
        else {
            cout << char(v[i] - 10 + 'A');
        }
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n >> k;

    to_k_inary(n, k);

    return 0;
}