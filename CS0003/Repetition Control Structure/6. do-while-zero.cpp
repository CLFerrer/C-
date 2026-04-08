#include <iostream>
using namespace std;
 
int main() {
    int n;
    do { // Loop body is executed at least once
        cout << "Enter number(0 to end): ";
        cin >> n;
        cout << "You entered: " << n << endl;
    } while (n != 0); // Loop continues until user enters 0
 
    return 0;
}