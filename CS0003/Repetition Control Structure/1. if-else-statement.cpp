#include <iostream>
using namespace std;
 
int main() {
    int no;
    cout << "Enter a number: ";
    cin >> no;
 
    if (no >= 0) // Check if the number is non negative.
        cout << "The number " << no << " is a non negative integer." << endl;
    else // If the number is negative.
        cout << "The number " << no << " is a negative integer." << endl;
 
    return 0;
}
