#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    for(int i = 1; i <= 5; ++i) {
        dq.push_front(i);
    }

    for(int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << " ";
    }
    cout << endl;

    return 0;
}