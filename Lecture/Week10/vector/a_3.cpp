#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    cout << "v.empty(): " << v.empty() << endl;

    for(int i = 1; i <= 5; ++i) {
        v.push_back(i);
    }

    cout << "v.empty(): " << v.empty() << endl;

    vector<int>::iterator it;
    for(it = v.begin(); it < v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}