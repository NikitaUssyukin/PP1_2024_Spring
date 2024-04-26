#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    
    /*
    1) apply unique to both vectors
    2) merge two vectors into the third
    3) apply unique to the new vector
    */

    int n, m;
    cin >> n >> m;

    vector<int> v1(n);
    vector<int> v2(m);

    for(int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    for(int i = 0; i < m; ++i) {
        cin >> v2[i];
    }

    vector<int>::iterator it; // iterator for the return value of unique

    it = unique(v1.begin(), v1.end());

    v1.erase(it, v1.end());

    it = unique(v2.begin(), v2.end());

    v2.erase(it, v2.end());

    // for(int i = 0; i < v1.size(); ++i) {
    //     cout << v1[i] << " ";
    // }
    // cout << endl;

    // for(int i = 0; i < v2.size(); ++i) {
    //     cout << v2[i] << " ";
    // }
    // cout << endl;

    vector<int> v3(v1.size() + v2.size());

    for(int i = 0, j = 0; j < v1.size(); i += 2, j++) {
        v3[i] = v1[j];
    }

    for(int i = 1, j = 0; j < v2.size(); i += 2, j++) {
        v3[i] = v2[j];
    }

    it = unique(v3.begin(), v3.end());

    v3.erase(it, v3.end());
    
    for(int i = 0; i < v3.size(); ++i) {
        cout << v3[i] << " ";
    }
    cout << endl;

    return 0;
}