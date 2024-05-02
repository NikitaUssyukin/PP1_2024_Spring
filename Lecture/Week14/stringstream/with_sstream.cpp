#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    istringstream iss(s);

    vector<int> v;
    int temp;
    while(iss >> temp) {
        v.push_back(temp);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}