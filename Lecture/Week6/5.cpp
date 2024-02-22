#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "cat";
    string s2 = s1;

    s1[0] = s2[2] = 'r';

    cout << s1 << " " << s2 << endl;

    return 0;
}