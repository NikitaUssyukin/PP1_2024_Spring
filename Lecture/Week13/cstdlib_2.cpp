#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    cin >> n;

    int k;
    cin >> k;

    srand(k);

    for(int i = 0; i < n; i++) {
        cout << rand() << " ";
    }
    cout << endl;

    return 0;
}