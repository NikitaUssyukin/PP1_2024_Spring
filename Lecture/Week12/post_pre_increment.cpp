#include<iostream>

using namespace std;

int main() {
    int a = 1, b = 1;

    cout << a++ << " " << ++b << endl;
    cout << a << " " << b << endl;

    cout << ++a + b++ << endl;
    cout << a << " " << b << endl;

    return 0;
}