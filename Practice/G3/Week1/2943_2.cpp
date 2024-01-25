#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    cout << n % 100 / 10 << endl;

    /*
    179 % 10 = 9
    179 / 10 % 10 = 17 % 10 = 7

    1998179 % 100 = 79 
    79 / 10 = 7
    */

    return 0;
}