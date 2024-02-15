#include <iostream>

using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};

    int n = sizeof(a)/sizeof(int); // amount of elements
    
    cout << n << endl;

    return 0;
}