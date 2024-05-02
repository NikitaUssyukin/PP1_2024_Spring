#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    istringstream iss(s);

    string name;
    int age;
    string id;
    double gpa;

    iss >> name >> age >> id >> gpa;

    cout << name << ", " << age << ", ";
    cout << id << ", " << gpa << "\n";

    return 0;
}