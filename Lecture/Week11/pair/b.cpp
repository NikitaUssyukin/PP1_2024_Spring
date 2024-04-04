#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int> > v(n);

    for(int i = 0; i < v.size(); ++i) {
        int a, b;
        cin >> a >> b;
        v[i] = make_pair(a, b);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}