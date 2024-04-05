// sub-optimal solution, using set is optimal
// compile with "-std=c++11" flag (g++ -std=c++11)
// otherwise will not run
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
        m[x] = x;
    }

    map<int, int>::iterator it;
    it = m.begin();

    while(it != m.end()) {
        if(it->first % 2 == 0) {
            it = m.erase(it);
            continue;
        }
        it++;
    }

    for(it = m.begin(); it != m.end(); it++) {
        // pair<int, int> p;
        // *it = p;
        cout << it->first << " ";
    }
    cout << endl;

    return 0;
}