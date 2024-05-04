// optimal solution

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n); // our histogram

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int max_area = 0;

    stack<pair<int, int> > st; // stack with starting index and the height of the rectangle

    for(int i = 0; i < n; ++i) {
        int start_index = i;
        int height, index;
        while(!st.empty() && v[i] < st.top().second) {
            index = st.top().first;
            height = st.top().second;
            st.pop();

            int width = i - index;
            int area = height * width;

            max_area = max(area, max_area);

            start_index = index;
        }
        
        st.push(make_pair(start_index, v[i]));
    }

    while(!st.empty()) {
        int height, index, width, area;
        
        index = st.top().first;
        height = st.top().second;
        st.pop();

        width = n - index;

        area = height * width;

        max_area = max(area, max_area);
    }

    cout << max_area << endl;

    return 0;
}