#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cin >> n;

    srand(time(0));

    for(int i = 0; i < n; i++) {
        cout << rand() << " ";
    }
    cout << endl;

    return 0;
}