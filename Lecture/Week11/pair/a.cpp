#include <iostream>

using namespace std;

int main() {
    pair<int, int> p = make_pair(5, 10);

    cout << p.first << " " << p.second << endl;

    p.first = 20;

    cout << p.first << " " << p.second << endl;

    return 0;
}