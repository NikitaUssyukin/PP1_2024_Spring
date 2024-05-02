#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int countVowels(string s) {
    int amountOfVowels = 0;

    string vowels = "AEIOUaeiou";

    for(int i = 0; i < s.size(); ++i) {
        if(vowels.find(s[i]) != string::npos) {
            amountOfVowels++;
        }
    }

    return amountOfVowels;
}

bool cmp(string a, string b) {
    int vowels_a = countVowels(a); // amount of vowels in string a
    int vowels_b = countVowels(b); // amount of vowels in string b

    if(vowels_a == vowels_b) {
        return a < b;
    }
    else {
        return vowels_a < vowels_b;
    }
}

int main() {
    int n;
    cin >> n; 
    vector<string> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " : " << countVowels(v[i]) << endl;
    }

    return 0;
}