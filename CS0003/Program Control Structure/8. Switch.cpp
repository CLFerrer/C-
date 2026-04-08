#include <iostream>
using namespace std;

int main() {
    int no;
    cout << "Enter a number: ";
    cin >> no;

    switch (no) {
        case 1: // if no is 1
            cout << "Roman Numeral: I" << endl;
            break;
        case 2: // if no is 2
            cout << "Roman Numeral: II" << endl;
            break;
        case 3: // if no is 3
            cout << "Roman Numeral: III" << endl;
            break; // Break is used to exit the switch statement after executing the matched case
        default: // Default case is executed if no other case matches
            cout << "Invalid input" << endl;
    }

    return 0;
}