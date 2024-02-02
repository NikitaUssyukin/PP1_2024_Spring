#include <iostream>

using namespace std;

int main() {
    int size = 1000; // here we know the size of the array
    int a[size] = {}; // so by typing "= {}" we fill the array with zeroes

    // example of how you can use that in code:
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}