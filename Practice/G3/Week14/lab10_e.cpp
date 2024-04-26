#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);

    map<string, double> mp;
    int total_students = 0;

    int n;
    cin >> n;

    // 1000 mice
    // 100 ran away
    // 100 / 1000 * 100 = 0.1 * 100 = 10% of mice ran away

    for(int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        for(int j = 0; j < m; j++) {
            string city;
            int applications;

            cin >> city;
            cin >> applications;

            total_students += applications;

            mp[city] += applications;
        }
    }

    map<string, double>::iterator it;
    for(it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " " << (it->second / total_students * 100) << endl;
    }

    return 0;
}