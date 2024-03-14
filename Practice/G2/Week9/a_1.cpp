#include <iostream>
#include <string>

using namespace std;

int main() {
    char c;
    cin >> c;

    if(c == 'Z') {
        cout << 'A' << endl;
    } else {
        cout << char(c + 1) << endl;
    }

    return 0;
}