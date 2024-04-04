#include <iostream>

using namespace std;

int main() {
    int a[7] = {-3, 7, 19, 31, 2, 9, 11};

    for(int i = 0; i < 7; ++i) {
        cout << "At the address " << a + i << " we have a value of " << *(a + i) << endl;
    }

    return 0;
}