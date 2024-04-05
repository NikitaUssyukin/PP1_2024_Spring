#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<pair<int, int> > v;
    
    v.push_back(make_pair(1, 2));
    v.push_back(make_pair(3, 4));
    v.push_back(make_pair(5, 6));

    cout << v[1].second << endl;
    cout << v.back().first << endl;

    return 0;
}