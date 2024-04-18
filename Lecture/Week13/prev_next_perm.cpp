#include <iostream>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main() {
    string str;
    cin >> str;

    set<string> s;

    do {
        s.insert(str);
    } while(next_permutation(str.begin(), str.end()));

    do {
        s.insert(str);
    } while(prev_permutation(str.begin(), str.end()));

    set<string>::iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}