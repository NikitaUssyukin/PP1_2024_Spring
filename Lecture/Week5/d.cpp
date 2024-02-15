#include <iostream>

using namespace std;

int main() {
    int a[][3] = {
        {1, 2, 3}, // 0
        {4, 5, 6}, // 1
        {7, 8, 9}  // 2
    };
    //   0  1  2
    
    int n = sizeof(a)/sizeof(int); // amount of individual ints
    int m = sizeof(a)/(sizeof(int) * 3); // amount of elements (1D arrays inside a 2D array)

    cout << n << " " << m << endl;

    return 0;
}