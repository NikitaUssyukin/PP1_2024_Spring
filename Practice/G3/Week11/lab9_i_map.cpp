#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    freopen("input_i.txt", "r", stdin);

    int n;
    cin >> n;

    map<string, int> m;

    // cout << m.size() << endl;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        // cout << "Amount of "<< s;
        // cout << " in map: " << m[s] << endl;

        if(m[s] > 0) {
            cout << "user already exists" << endl;
        } else {
            cout << "new user added" << endl;
            m[s]++;
        }

    }

    // cout << m.size() << endl;

    // map<string, int>::iterator it;
    // for(it = m.begin(); it != m.end(); it++) {
    //     cout << (*it).first << " " << it->second << endl;
    // }

    return 0;
}