// Arrays

#include <iostream>

using namespace std;

int main() {
    // creating an array for 5 elements, currently empty
    int a[5];

    // taking 5 elements into our array
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    
    // outputting using a loop
    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}