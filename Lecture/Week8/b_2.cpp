#include <iostream>
#include <climits>

using namespace std;

int findMax(int arr[][100], int n, int m);

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][100]; // here the second dimension should be the same as in the parameter list

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j]; 
        }
    }

    cout << findMax(a, n, m) << endl;
    
    return 0;
}

int findMax(int arr[][100], int n, int m) { // specify the second dimension in the brackets
    int max = INT_MIN; // smallest possible int number, to use you need <climits>

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    return max;
}

