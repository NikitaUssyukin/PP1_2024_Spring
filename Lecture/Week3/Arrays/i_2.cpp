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
    
    // searching in an array, printing index if found
    int find;
    cin >> find;
    for(int i = 0; i < n; ++i) {
        if(a[i] == find) {
            cout << i << " ";
            return 0; // stops the program if the num is found
        }
    }
    cout << "Not found!\n";

    return 0;
}