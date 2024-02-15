#include <iostream>

using namespace std;

int main() {
    int a[3][3];

    // taking each element from input
    cin >> a[0][0] >> a[0][1] >> a[0][2];
    cin >> a[1][0] >> a[1][1] >> a[1][2];
    cin >> a[2][0] >> a[2][1] >> a[2][2];

    cout << "-----------------\n";

    // outputting each individual element
    cout << a[0][0] << " " << a[0][1] << " " << a[0][2] << endl;
    cout << a[1][0] << " " << a[1][1] << " " << a[1][2] << endl;
    cout << a[2][0] << " " << a[2][1] << " " << a[2][2] << endl;
    
    return 0;
}