// Loops: for, while and do while

#include <iostream>

using namespace std;

int main() {
    int a, cnt = 0;
    cin >> a;

    int n = 1;
    while(n < a) {
        if(n % 2 == 0) {
            ++cnt;
        }
        ++n;
    }

    cout << cnt << endl;

    return 0;
}