#include <iostream>

using namespace std;

string greet1(string name) {
    return "Hello " + name + "!";
}

void greet2(string name) {
    cout << "Hello " + name + "!" << endl;
    // return "smth"; - returning a value in the void function is a mistake
    return; // but you can just type return without any value 
}

int main() {
    string s;
    cin >> s;

    cout << greet1(s) << endl;

    greet2(s);
    
    return 0;
}