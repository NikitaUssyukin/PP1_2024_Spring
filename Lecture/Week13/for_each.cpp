#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void doubler(int &n) { // function to pass into for_each
    n *= 2;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    for_each(v.begin(), v.end(), doubler); // doubling each element in v

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}