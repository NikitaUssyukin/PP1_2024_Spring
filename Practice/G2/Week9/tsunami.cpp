#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    if(n % 2 == 0) {
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < n; j++) {
                if(j < i) {
                    cout << '#'; 
                }
                else {
                    cout << '.';
                }
            }
            cout << endl;
        }
    } else {
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < n; j++) {
                if(j < n - i) {
                    cout << '.'; 
                }
                else {
                    cout << '#';
                }
            }
            cout << endl;
        }
    }

    return 0;
}