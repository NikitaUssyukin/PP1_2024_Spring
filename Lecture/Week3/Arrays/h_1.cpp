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
    
    // outputting only even elements
    for(int i = 0; i < n; ++i) {
        if(a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}