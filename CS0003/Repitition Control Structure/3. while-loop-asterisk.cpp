#include <iostream>
using namespace std;
 
int main() {
    int n, asterisk = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (asterisk <= n) { // While loop checks if the value of asterisk is less than or equal to n.
        cout << "*";
        asterisk++; // Increments the asterisk variable by 1.
    }
 
    return 0;
}