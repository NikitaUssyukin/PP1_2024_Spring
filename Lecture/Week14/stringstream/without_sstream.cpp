#include <iostream>
#include <vector>
// #include <string>
// #include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<int> v(n);
    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}