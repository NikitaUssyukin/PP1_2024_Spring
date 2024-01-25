#include <iostream>

using namespace std;

int main() {
    int v, t;
    cin >> v >> t;

    int s = v * t;

    /*
    v = 100
    t = 3

    s = 100 * 3 = 300

    300 % 109 = 82
    300 / 109 = 2
    */

    /*
    300 % 109 = 82
    109 + 82 = 192
    192 % 109 = 82

    -300 % 109 = -82
    109 - 82 = 27
    27 % 109 = 27
    */
    
    s = 109 + s % 109;

    cout << s % 109 << endl;
    
    return 0;
}