// Loops: for, while and do while

#include <iostream>

using namespace std;

int main() {
    // infinite loop with counter
    int cnt = 0;

    for(;;) {
        cout << ++cnt << endl;
    }

    return 0;
}