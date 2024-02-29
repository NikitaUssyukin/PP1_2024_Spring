#include <iostream>

using namespace std;

void fillArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];

    cout << "before fillArray call:\n";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    fillArray(a, n);

    cout << "after fillArray call:\n";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}