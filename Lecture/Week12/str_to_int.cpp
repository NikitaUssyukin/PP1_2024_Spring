#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "TWOZERTWOFOR"; //2024

    string voc[10] = {
        "ZER", "ONE", "TWO", 
        "THR", "FOR", "FIV",
        "SIX", "SEV", "EGH", 
        "NIN"
        };

    string result = "";

    for(int i = 0; i < s.size(); i += 3) {
        string temp = s.substr(i, 3);
        for(int j = 0; j < 10; j++) {
            // cout << voc[j] << " " << temp << endl;
            if(voc[j] == temp) {
                cout << "Match" << endl;
                result += j + '0';
            }
        }
    }

    cout << result << endl;

    return 0;
}

/*
ZER - 0
ONE - 1
TWO - 2
THR - 3
FOR - 4
FIV - 5
SIX - 6
SVN - 7
EGH - 8
NIN - 9

All literal representations consist of 3 letters, all uppercase

TWOZERTWOFOR - 2024
*/