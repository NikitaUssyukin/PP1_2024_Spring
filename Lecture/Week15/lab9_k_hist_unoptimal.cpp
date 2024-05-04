// very slow and unoptimal solution
// won't be accepted by ejudge

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n); // our histogram

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int max_area = 0;

    for(int i = 0; i < n - 1; ++i) {
        for(int j = i + 1; j < n; ++j) {
            int min_height = v[i];
            for(int k = i; k < j; ++k) {
                min_height = min(v[k], min_height); // checking which is smaller
                // v[k] is the current rectangle height
                // it is compared with min_height by the min function
                // whichever one is smaller is returned
                
                int width = k - i + 1;
                int current_area = min_height * width;
                max_area = max(current_area, max_area);
                // max function will return the larger value of the 2 specified
            }
        }
    }

    cout << max_area << endl;

    return 0;
}