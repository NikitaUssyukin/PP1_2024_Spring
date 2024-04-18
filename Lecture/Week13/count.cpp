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

    cout << count(v.begin(), v.end(), 1) << endl; // counts how many 1's there are in vector v 

    return 0;
}