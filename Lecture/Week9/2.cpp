#include <iostream>
#include <climits> // for INT_MAX and ULONG_LONG_MAX 

using namespace std;

long long fibonacci(int n) {
    if(n == 0 || n == 1) {
        return n;
    } 
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;

    INT_MAX; // 2147483647
    ULONG_LONG_MAX; // 2 * 9223372036854775807 + 1

    return 0;
}