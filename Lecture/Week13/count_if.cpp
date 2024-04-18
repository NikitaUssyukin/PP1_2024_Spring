#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool is_even(int n) { // function that decides whether the element will be counted
    return n % 2 == 0;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    cout << count_if(v.begin(), v.end(), is_even) << endl; // counts how many 1's there are in vector v 

    return 0;
}