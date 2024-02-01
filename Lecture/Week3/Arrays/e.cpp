// Arrays

#include <iostream>

using namespace std;

int main() {
    // variable n to determine the size of our array
    int n;
    cin >> n;

    // creating an array for n elements, currently empty
    int a[n];

    // taking n elements into our array
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // outputting using a loop
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}