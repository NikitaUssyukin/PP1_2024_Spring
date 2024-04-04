#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr;

    cout << "arr.empty(): " << arr.empty() << endl;

    for(int i = 0; i < arr.size(); ++i) {
        arr[i] = i + 1;
    }

    cout << "arr.empty(): " << arr.empty() << endl;

    for(int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}