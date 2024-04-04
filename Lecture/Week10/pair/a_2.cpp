#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    pair<int, int> p = make_pair(a, b);

    cout << p.first << " " << p.second << endl;

    return 0;
}