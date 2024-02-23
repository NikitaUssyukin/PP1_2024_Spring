#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if (i == 0 || j == 0) {
                cout << i + j << " ";
            } else {
                cout << i * j << " ";
            }
            
        }
        cout << endl;
    }

    return 0;
}

/*
0 1 2
1 1 2
2 2 4
*/