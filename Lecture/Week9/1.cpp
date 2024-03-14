#include <iostream>
#include <climits> // for INT_MAX and ULONG_LONG_MAX 

using namespace std;

long long factorial(int n) {
    if(n == 0) {
        return 1;
    } 
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;

    INT_MAX; // 2147483647
    ULONG_LONG_MAX; // 2 * 9223372036854775807 + 1

    return 0;
}