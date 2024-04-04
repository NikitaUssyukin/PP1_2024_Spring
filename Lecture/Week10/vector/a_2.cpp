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

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}