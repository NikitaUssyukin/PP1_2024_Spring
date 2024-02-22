#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "string stores and manipulates sequences of character-like objects";
    string s2 = s1.substr(18, 11); // substr(startIndex, numberOfCharacters)

    cout << s2 << endl;
    
    s1.insert(7, "successfully "); // insert (startIndex, stringToInsert)

    cout << s1 << endl;

    s1.replace(20, 6, "keeps");

    cout << s1 << endl;

    return 0;
}