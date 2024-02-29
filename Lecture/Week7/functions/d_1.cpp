#include <iostream>

using namespace std;

void increaseBy2(int a) {
    a += 2;
}

int main() {
    int a;
    cin >> a;

    increaseBy2(a);

    cout << a;

    return 0;
}