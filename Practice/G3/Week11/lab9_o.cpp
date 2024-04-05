#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    freopen("input_o.txt", "r", stdin);

    int n;
    cin >> n;

    map<string, string> mp;

    for(int i = 0; i < n; i++) {
        string login, pass;
        cin >> login >> pass;
        mp.insert(make_pair(login, pass));
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; i++) {
        string login, pass;
        cin >> login >> pass;
        // cout << mp[login] << endl;
        if(mp[login] == "") {
            cout << "login error" << endl;
        } 
        else if(mp[login] == pass) {
            cout << "correct password" << endl;
        } 
        else {
            cout << "password error" << endl;
        }
    }

    // map<string, int>::iterator it;
    // for(it = m.begin(); it != m.end(); it++) {
    //     cout << (*it).first << " " << it->second << endl;
    // }

    return 0;
}