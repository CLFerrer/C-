#include <iostream>
using namespace std;
 
int main() {
    int i, j;
    for (i = 1; i <= 10; i++) { // outer loop controls the number for which the multiplication table is printed, from 1 to 10.
        cout << "Table of " << i << endl;
        for (j = 1; j <= 10; j++) { // inner loop controls the multiplier, from 1 to 10, for each number in the multiplication table.
            cout << i << " x " << j << " = " << (i * j) << endl; // Multiply i and j and print the result in a formatted way.
        }
        cout << endl;
    }
 
    return 0;
}