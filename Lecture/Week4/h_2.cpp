#include <iostream>

using namespace std;

int main() {
    
    string s;
    getline(cin, s); // instead of cin >> s

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32; // 'a' - 'A'
        }
        
    }

    cout << s << endl;

    return 0;
}