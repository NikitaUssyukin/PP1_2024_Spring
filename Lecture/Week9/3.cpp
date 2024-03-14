#include <iostream>
#include <climits> // for INT_MAX and ULONG_LONG_MAX 

using namespace std;

long long power(int n, int m) {
    if(m == 0) {
        return 1;
    } 
    return n * power(n, m - 1);
}

/*
5^3 = 5 * 5 * 5

5^3 = 5 * 5^2
*/

int main() {
    int n, m;
    cin >> n >> m;
    cout << power(n, m) << endl;

    INT_MAX; // 2147483647
    ULONG_LONG_MAX; // 2 * 9223372036854775807 + 1

    return 0;
}