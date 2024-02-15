#include <iostream>

using namespace std;

int main() {
    // outputting indexes of 2D array
    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            cout << i << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}