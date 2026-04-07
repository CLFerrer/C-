#include <iostream>
using namespace std;

int main() {
    int no;
    cout << "Enter a number: ";
    cin >> no;

    if (no % 2 == 0) // Modulo operator checks if the number is divisible by 2.
        cout << "Number " << no << " is even." << endl;
    else // Checks if the number is odd.
        cout << "Number " << no << " is odd." << endl;

    return 0;
}