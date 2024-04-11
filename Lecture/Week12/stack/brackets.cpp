#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s; // (())()()()

    stack<char> st;

    for(int i = 0; i < s.size(); i++) {
        if(st.empty()) {
            st.push(s[i]);
        } else {
            if(st.top() == '(' && s[i] == ')') {
                st.pop();
            }
        }
    }

    if(st.empty()) {
        cout << "Correct sequence!" << endl;
    } else {
        cout << "Incorrect sequence!" << endl;
    }

    return 0;
}