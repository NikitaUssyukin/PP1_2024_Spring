#include <iostream>

using namespace std;

int a; // global variable a, accessible everywhere in the program

void increaseBy2() {
    a += 2;
}

int main() {
    cin >> a;

    increaseBy2();

    cout << a;

    return 0;
}