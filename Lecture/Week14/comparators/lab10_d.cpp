#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumOfAllElements(vector<int> v) {
    int sum = 0;
    for(int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    return sum;
}

bool cmp(vector<int> v1, vector<int> v2) { 
    int sum_v1 = sumOfAllElements(v1);
    int sum_v2 = sumOfAllElements(v2);

    if(sum_v1 != sum_v2) {
        return sum_v1 < sum_v2;
    }
    else if(v1.size() != v2.size()) {
        return v1.size() < v2.size();
    }
    else {
        for(int i = 0; i < v1.size(); i++) {
            if(v1[i] != v2[i]) {
                return v1[i] < v2[i];
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n; 
    vector<vector<int> > v(n);
    for(int i = 0; i < v.size(); ++i) {
        int m;
        cin >> m;
        for(int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        for(int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}