#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s1;
    set<int> s2;

    s1.insert(79);
    s1.insert(-5);
    s1.insert(22);
    s1.insert(8);
    s1.insert(79);
    s1.insert(-5);

    s2 = s1;

    set<int>::iterator it;
    for(it = s2.begin(); it != s2.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}