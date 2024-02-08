#include <iostream>

using namespace std;

int main() {
    // how to output ASCII code table
    for(int i = 0; i < 200; ++i) {
        cout << i << " : " << char(i) << endl;
    }

    return 0;
}