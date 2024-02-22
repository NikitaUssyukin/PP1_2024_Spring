#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Hello";

    // ways to access the first character 
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.front() << endl;
    cout << *(s.begin()) << endl;

    cout << s.empty() << endl;
    cout << s.size() << endl;
    cout << s.capacity() << endl;
    cout << s.max_size() << endl;

    // ways to access the last character
    cout << s[s.size() - 1] << endl;
    cout << s.at(s.size() - 1) << endl;
    cout << s.back() << endl;
    cout << *(--(s.end())) << endl;

    return 0;
}