#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v(5);

    cout << "v.empty(): " << v.empty() << endl;

    for(int i = 0; i < v.size(); ++i) {
        v[i] = i + 1;
    }

    cout << "v.empty(): " << v.empty() << endl;

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}