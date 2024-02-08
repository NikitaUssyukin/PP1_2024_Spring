#include <iostream>

using namespace std;

int main() {
    int a1 = 65;
    int a2 = 97;

    char c1, c2;
    // implicit type casting
    c1 = a1;
    c2 = a2;

    cout << c1 << " " << c2 << endl;

    return 0;
}