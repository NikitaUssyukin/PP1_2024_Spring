#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;

    s.insert(79);
    s.insert(-5);
    s.insert(22);
    s.insert(8);
    s.insert(79);
    s.insert(-5);

    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}