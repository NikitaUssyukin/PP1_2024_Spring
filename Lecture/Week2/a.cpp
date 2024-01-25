#include <iostream>

using namespace std;

int main() {
    int a = 10; // 1010
    int b = 2;  // 0010

    cout << (a | b) << endl; // 1010
    cout << (a & b) << endl; // 0010
    cout << (a ^ b) << endl; // 1000
    cout << (b << 1) << endl; // 0100
    cout << (b >> 1) << endl; // 0001

    return 0;
}