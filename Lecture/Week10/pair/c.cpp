#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;

    vector<pair<int, int> > v(n);

    for(int i = 0; i < v.size(); ++i) {
        int a, b;
        cin >> a >> b;
        v[i] = make_pair(a, b);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}