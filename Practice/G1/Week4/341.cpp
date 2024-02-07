#include <iostream>

using namespace std;

int main() {
    int x, cnt = 0;

    cin >> x;

    for(int i = 1; i <= x; i++) {
        if(x % i == 0) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}