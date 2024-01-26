// alternative solution using cmath
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    if(n <= k) {
        cout << 2 << endl;
        return 0;
    } 

    // converting n from the number of steaks to the number of sides of the steaks
    n *= 2; // same as n = n * 2;

    cout << round(double(n) / double(k)) << endl;

    return 0;

    // 3 2 - 6 sides of steaks, 2 spots on the pan
    // 3

    // 13 7 - 26 sides of steaks, 7 spots on the pan;  
    // 4
    
    /*
    we divide the amount of sides of the steaks 
    by the number of available spots on the pan
    E.g. 
    26 / 7 = 3
    26 % 7 = 5

    if the remainder (which is 5 in the example above) 
    is larger than the k / 2 (in this case 7 / 2 = 3)
    than we cannot cook the stakes in shorter time.
    */
}