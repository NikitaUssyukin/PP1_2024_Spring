// Loops: for, while and do while

#include <iostream>

using namespace std;

int main() {
    
    // do while loop that repeats 10 times
    int i = 10; // counter
    do {
        cout << i << endl;
        ++i; // incrementing the counter at the end of each iteration
    } while(i < 10); // condition is at the end
    // do not forget semicolons

    return 0;
}