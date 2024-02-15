#include <iostream>

using namespace std;

int main() {
    int a[3][3] = {
        {1, 2, 3}, // 0
        {4, 5, 6}, // 1
        {7, 8, 9}  // 2
    };
    //   0  1  2
    
    // first element of the first 1D array (first row, first column)
    cout << a[0][0] << endl;

    // last element of the last 1D array (last row, last column)
    cout << a[2][2] << endl;

    // first element of the second 1D array (second row, first column)
    cout << a[1][0] << endl;

    return 0;
}