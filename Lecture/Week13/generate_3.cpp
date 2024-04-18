#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int rng() {
    int n = rand();
    while(!(n > 999 && n < 10000)) {
        n = rand();
    }
    return n;
}

int main() {
    srand(time(0));

    int n;
    cin >> n;

    vector<int> v(n);

    generate(v.begin(), v.end(), rng); // generating a random sequence of 4-digit numbers

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}