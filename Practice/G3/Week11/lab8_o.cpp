#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    set<char> s;

    for(int i = 0; i < str.size(); ++i) {
        s.insert(tolower(str[i]));
    }

    cout << s.size() << endl;

    set<char>::iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}