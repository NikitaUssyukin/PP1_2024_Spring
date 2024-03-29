#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n, int k) {
    if(n <= 1 || n <= k) {
        return false;
    }
    
    int sq_root_of_n = ceil(sqrt(n)) + 1;

    for(int i = 2; i < sq_root_of_n; ++i) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;

    int cnt = 0;

    for(int i = 0; i < v.size(); ++i) {
        if(isPrime(v[i], k)) {
            ++cnt;
        } 
    }

    cout << cnt << endl;

    return 0;
}