#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    for(int i = 1; i <= 5; ++i) {
        dq.push_back(i);
    }

    // accesing 1st element
    cout << dq[0] << " " << dq.at(0) << " ";
    cout << dq.front() << " ";
    cout << (*dq.begin()) << endl;

    cout << dq[dq.size() - 1] << " " << dq.at(dq.size() - 1) << " ";
    cout << dq.back() << " ";
    cout << *(dq.end() - 1) << endl;

    return 0;
}