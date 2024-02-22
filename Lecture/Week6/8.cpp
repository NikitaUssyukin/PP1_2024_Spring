#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "String stores and manipulates sequences of character-like objects.  The class is dependent neither on the character type nor on the nature of operations on that type.";
    
    cout << s1.find("stores") << endl;

    cout << s1.find_last_of("of") << endl;

    cout << s1.find_first_not_of("String") << endl;

    

    return 0;
}