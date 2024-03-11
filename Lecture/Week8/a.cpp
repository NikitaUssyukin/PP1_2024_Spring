#include <iostream>

using namespace std;

void fillArray(int arr[][100], int n, int m) { // specify the second dimension in the brackets
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j]; 
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][100]; // here the second dimension should be the same as in the parameter list

    cout << "before fillArray call:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    fillArray(a, n, m);

    cout << "after fillArray call:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}