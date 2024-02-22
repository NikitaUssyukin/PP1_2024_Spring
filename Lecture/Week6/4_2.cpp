#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;

    // getline allows to input a whole sentence with spaces
    // E.g.: "I study at KBTU and I am very happy!""
    getline(cin, s1);

    cout << s1 << endl;

    return 0;
}