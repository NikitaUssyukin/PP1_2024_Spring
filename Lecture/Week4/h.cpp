#include <iostream>

using namespace std;

int main() {
    
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        s[i] -= 32; // 'a' - 'A'
    }

    cout << s << endl;

    return 0;
}