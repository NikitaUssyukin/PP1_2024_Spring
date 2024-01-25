#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    cout << n / 10 % 10 << endl;

    /*
    179 % 10 = 9
    179 / 10 % 10 = 17 % 10 = 7
    */

    return 0;
}