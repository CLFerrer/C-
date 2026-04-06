#include<iostream>
using namespace std;

int main() {
    char mystr[20]; // This declares a character array named mystr that can hold up to 20 characters. It is used to store a string of characters, such as a name or a team name.

    cout << "What's your name? ";
    cin >> mystr;
    cout << "Hello " << mystr << endl;

    cout << "What is your favorite team? ";
    cin >> mystr;
    cout << "I like " << mystr << " too" << endl;

    return 0;
}