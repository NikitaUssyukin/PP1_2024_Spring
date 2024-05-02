#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) { // comparator that assumes that any even number is larger than any odd number
                         // sorts in ascending order
                         // this way we get a sequence, where all odd numbers are on the left side, in ascending order
                         // and all the right numbers are on the right side, also in ascending order
    if(a % 2 == 0 && b % 2 == 0) {
        return a > b;
    } 
    else if(a % 2 != 0 && b % 2 == 0) {
        return true;
    }
    else if(a % 2 == 0 && b % 2 != 0) {
        return false;
    }
    else {
        return a < b;
    }
}

int main() {
    int n;
    cin >> n; 
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}