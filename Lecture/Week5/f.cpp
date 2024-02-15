#include <iostream>

using namespace std;

int main() {
    int a[3][3];

    // taking each element from input
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> a[i][j];
        }
    }

    cout << "-----------------\n";

    // outputting each individual element
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}