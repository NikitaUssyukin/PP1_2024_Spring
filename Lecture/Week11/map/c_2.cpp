#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    freopen("cars.txt", "r", stdin);

    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        m[s]++;
    }

    map<string, int>::iterator it = ++m.begin(); // legal
    // map<string, int>::iterator it = m.begin() + 1; // illegal
    // bidirectional iteratots support only ++ and --

    cout << it->first << " " << it->second << endl;
    
    return 0;
}