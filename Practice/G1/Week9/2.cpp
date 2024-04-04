#include <iostream>

using namespace std;

int main() {

    int a = 1;
    int b = 1;

    cout << a++ << endl;
    cout << ++b << endl;

    cout << a << " " << b << endl;

    return 0;
}

/*
3 2 4 7 11
10

1 5 6 8 9 10 12 13 14 15 16 17 18 19 20...

15
*/