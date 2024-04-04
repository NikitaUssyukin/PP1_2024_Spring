#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    for(int i = 1; i <= 5; ++i) {
        v.push_back(i);
    }

    // accessing the first element
    cout << v[0] << endl;
    cout << v.at(0) << endl;
    cout << v.front() << endl;
    cout << *(v.begin()) << endl;

    // accessing the last element
    cout << v[v.size() - 1] << endl;
    cout << v.at(v.size() - 1) << endl;
    cout << v.back() << endl;
    cout << *(v.end() - 1) << endl;

    return 0;
}