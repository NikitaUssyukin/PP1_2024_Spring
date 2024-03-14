#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    getline(cin, s);

    for(int i = 0; i < s.size(); i++) {
        if(('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z')) {
            if(s[i] == 'Z' || s[i] == 'z') {
                s[i] -= 25; 
            } else {
                s[i] += 1;
            }
        }
    }

    cout << s << endl;

    return 0;
}