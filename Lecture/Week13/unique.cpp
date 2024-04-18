#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    vector<int>::iterator it = unique(v.begin(), v.end());

    // vector after unique
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // erasing removed duplicates at the end of the vector
    v.erase(it, v.end());

    // final result
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
1 1 2 3 4 3 5 5 5 1

1 2 3 4 3 5 1 1 5 5
            it
*/