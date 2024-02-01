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
    
    // outputting only elements with even indexes
    for(int i = 0; i < n; i += 2) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}