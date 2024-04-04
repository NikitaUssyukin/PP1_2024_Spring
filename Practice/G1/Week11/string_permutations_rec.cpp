#include <iostream>
#include <string>

using namespace std;

void permute(string s, int start) {
    int n = s.size();
    if(start == n - 1) {
        return;
    }
    for(int i = start; i < n; ++i) {
        swap(s[start], s[i]);
        cout << s << endl;
        permute(s, start + 1);
        swap(s[i], s[start]);
    }
}

int main() {
    string s;
    cin >> s;

    permute(s, 0);

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
