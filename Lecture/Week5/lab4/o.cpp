#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int max = a[0][0];
    int max_i = 0;

    for(int i = 0; i < n; ++i) {
        if(a[i][i] > max) {
            max = a[i][i];
            max_i = i;
        }  
    }

    // Indexes on the main diagonal: 00, 11, 22, 33, 44, 55... etc 

    cout << "Maximum element is: " << max;
    cout << " with coordinates: ";
    cout << max_i << ";" << max_i << endl;
    // Maximum element is: -1 with coordinates: 1;1

    return 0;
}