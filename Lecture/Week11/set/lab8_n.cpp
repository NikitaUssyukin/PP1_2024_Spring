#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;

    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if(x % 2 == 0) {
            continue;
        }
        s.insert(x);
    }

    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}