#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) { // comparator to sort in reverse, from largest to smallest
    return a > b;
}

int main() {
    int n;
    cin >> n; 
    vector<int> v(n);
    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}