#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    m["Dogs"] = 10;
    m["Cats"] = 15;
    m["Mice"] = 2;
    m["Elephants"] = 3;
    m["Tigers"] = 5;

    // ways to access elements in a map
    map<string, int>::iterator it; // iterator is mandatory
    it = m.begin();
    cout << it->first << " " << it->second << endl;
    cout << (*it).first << " " << (*it).second << endl;
    pair<string, int> p = *it; // you can dereference a value of an iterator into a pair
    cout << p.first << " " << p.second << endl;

    return 0;
}