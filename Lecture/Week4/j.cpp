#include <iostream>

using namespace std;

int main() {
    
    char c;
    cin >> c;

    cout << toupper(c) << endl; // returns uppercased letter
    cout << tolower(c) << endl; // returns lowercased letter
    cout << isalpha(c) << endl; // checks if the symbol is alphabetical (is a letter)
    cout << isalnum(c) << endl; // checks if the symbol is alphabetical or a digit (number)
    cout << isdigit(c) << endl; // checks if the symbol is a digit
    cout << ispunct(c) << endl; // checks if the symbol is a punctuation mark

    // string s;
    // cin >> s;

    // cout << toupper(s) << endl; - this will not work,
    // because these functions accept only chars

    return 0;
}