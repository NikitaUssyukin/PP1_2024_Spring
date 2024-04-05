#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool checkUnique(vector<string>, string);

void permute(string s, int start, vector<string> &v) {
    int n = s.size();
    if(start == n - 1) {
        return;
    }
    for(int i = start; i < n; ++i) {
        swap(s[start], s[i]);
        if(checkUnique(v, s)) {
            v.push_back(s);
        }
        permute(s, start + 1, v);
        swap(s[i], s[start]);
    }
}

bool checkUnique(vector<string> v, string s) {
    if(!v.empty()) {
        int n = v.size();
        for(int i = 0; i < n; ++i) {
            if(s == v[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    vector<string> v;

    permute(s, 0, v);

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }

    return 0;
}

/*
abc *
bac *
cba *
abc
acb *
abc

abc *
acb *
bac *
bca
cba *
cab
*/
