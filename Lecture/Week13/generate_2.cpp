#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int k;

int sequence_gen() { // function to pass into generate
    return k++;
}

int main() {
    int n;
    cin >> n >> k;

    vector<int> v(n);

    generate(v.begin(), v.end(), sequence_gen); // generating a sequence of numbers

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}