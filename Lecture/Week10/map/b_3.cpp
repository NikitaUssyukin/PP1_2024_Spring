#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    freopen("animals.txt", "r", stdin);

    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        string s;
        int x;
        cin >> s >> x;
        m.insert(make_pair(s, x));
    }

    cout << m["Monkeys"] << endl;

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}