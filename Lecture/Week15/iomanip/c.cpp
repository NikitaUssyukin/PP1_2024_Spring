#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int arr[20][20];
    for(int i = 0; i < 20; ++i) {
        for(int j = 0; j < 20; ++j) {
            arr[i][j] = i * j;
        }
    }

    for(int i = 0; i < 20; ++i) {
        for(int j = 0; j < 20; ++j) {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}