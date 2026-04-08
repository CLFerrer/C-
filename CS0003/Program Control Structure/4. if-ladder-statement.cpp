#include <iostream>
using namespace std;

int main() {
    int no;
    cout << "Enter a number: ";
    cin >> no;

    if (no > 0) // Checks if the number is greater than zero.
        cout << "It is positive." << endl;
    else if (no < 0) // Checks if the number is less than zero.
        cout << "It is negative." << endl;
    else // If the number is neither positive nor negative.
        cout << "It is zero." << endl;

    return 0;
}