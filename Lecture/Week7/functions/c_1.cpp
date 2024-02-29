#include <iostream>

using namespace std;

int calculateSum(int n) {
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    cout << calculateSum(n) << endl;
    
    return 0;
}