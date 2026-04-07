#include <iostream>
using namespace std;

int main() {
    char opt;
    cout << "=== MENU OF SHAPES ===" << endl; // Displaying a menu of shape options for the user to choose from.
    cout << "S - Square" << endl;
    cout << "R - Rectangle" << endl;
    cout << "C - Circle" << endl;

    cout << "Enter your choice: ";
    cin >> opt;

    switch (opt) {
        case 'S': case 's': // This accepts both uppercase and lowercase inputs.
            cout << "You chose square." << endl;
            break; // Break is used to exit the switch statement after executing the matched case.
        case 'R': case 'r':
            cout << "You picked rectangle." << endl;
            break;
        case 'C': case 'c':
            cout << "You selected circle." << endl;
            break;
        default: // Default case is executed if no other case matches.
            cout << "Invalid entry." << endl;
    }

    return 0;
}