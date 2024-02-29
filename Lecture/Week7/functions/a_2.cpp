#include <iostream>

using namespace std;

int ourMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int ourMin(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << ourMax(2, 8) << endl;
    cout << ourMin(2, 8) << endl;
    return 0;
}