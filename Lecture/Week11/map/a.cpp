#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> m;

    freopen("../pair/input.txt", "r", stdin);
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int key, value;
        cin >> key >> value;
        m[key] = value;
    }

    map<int, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}