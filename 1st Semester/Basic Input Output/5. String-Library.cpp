#include<iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your school name: ";
    getline(cin, name); // This reads a line of text from the user and stores it in the variable name. It allows the user to enter a string that may contain spaces.
    cout << "Welcome to " << name << endl;

    return 0;
}