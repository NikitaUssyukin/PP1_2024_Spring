#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "cat";
    string s2 = s1;

    s1.append("acomb");
    
    s2 += 'a';
    s2.push_back('p');
    s2.append("ult");

    cout << s1 << " " << s2 << endl;

    s1.pop_back();

    cout << s1 << endl;

    s2.erase(7, 1); // erasing one character at index 7

    cout << s2 << endl;

    s2.erase(3); // erasing all characters from the index 3 up to the end

    cout << s2 << endl;

    cout << "before clear, s1.empty(): " << s1.empty() << endl;

    s1.clear();

    cout << "after clear, s1.empty(): " << s1.empty() << endl;

    return 0;
}