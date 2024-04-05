// sub-optimal solution, using set is more optimal

#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> m;
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if(x % 2 == 0) continue; // skips the current iteration of the loop
        // works like break, but does not stop the loop entirely
        m[x] = x;
    }

    map<int, int>::iterator it;

    for(it = m.begin(); it != m.end(); it++) {
        // pair<int, int> p;
        // *it = p;
        cout << it->first << " ";
    }
    cout << endl;

    return 0;
}