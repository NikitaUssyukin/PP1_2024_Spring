#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "String stores and manipulates sequences of character-like objects. The class is dependent neither on the character type nor on the nature of operations on that type.";

    unsigned long long position = s1.find(" ");
    while (position != string::npos) {
        s1.replace(position, 1, ".");
        position = s1.find(" ");
    }

    cout << s1 << endl;

    return 0;
}