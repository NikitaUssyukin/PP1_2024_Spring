#include <iostream>

using namespace std;

int main() {
    int size = 1000; // here we know the size of the array
    int a[size] = {}; // so by typing "= {}" we fill the array with zeroes

    // now we have zeroes instead of random values from the memory
    for(int i = 0; i < size; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}