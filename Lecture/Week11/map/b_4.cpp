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

    if(m.find("Monkeys") != m.end()) {
        cout << "We do have monkeys!" << endl;
    } else {
        cout << "No monkeys for today..." << endl;
    }

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}