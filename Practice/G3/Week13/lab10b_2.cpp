#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int N = 0;

long long gen_func() {
    long long power = powl(N, N);
    N++;
    return power;
}

int main() {
    int n;
    cin >> n;
    n++;
    vector<long long> v(n);

    generate(v.begin(), v.end(), gen_func);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}