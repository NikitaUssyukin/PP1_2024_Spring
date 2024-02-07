#include <iostream>

using namespace std;

int main() {
    int N;

    cin >> N;
    int even_cnt = 0, odd_cnt = 0;

    for(int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        if(a % 2 == 0) {
            even_cnt++;
        } else {
            odd_cnt++;
        }
    }

    cout << even_cnt << " " << odd_cnt << endl;

    return 0;
}