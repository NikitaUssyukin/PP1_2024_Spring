#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rng() {
    int n = rand();
    while(!(n > 999 && n < 10000)) {
        n = rand();
    }
    return n;
}

int main() {
    int n;
    cin >> n;

    srand(time(0));

    for(int i = 0; i < n; i++) {
        cout << rng() << " ";
    }
    cout << endl;

    return 0;
}