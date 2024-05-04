/*
We get n number of requests to a key-value database

if we get "set" command, we take the key and value 
and we associate the value with the key

if we get "get", we take only the key 
and we give back the value associated with the key 
if there is no key, print "error: key '<key>' not found"

Input example
4
set cat lion
set bird parrot
get cat
get dog

Output 
lion
error: key 'dog' not found
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    int n;
    cin >> n;

    map<string, string> mp;

    for(int i = 0; i < n; ++i) {
        string command, key, value;
        cin >> command;
        if(command == "set") {
            cin >> key >> value;
            mp[key] = value;
        }

        if(command == "get") {
            cin >> key;
            if(mp[key] == "") {
                cout << "error: key '" << key << "' not found\n";
            } 
            else {
                cout << mp[key] << endl;
            }
            
        }

    }

    return 0;
}