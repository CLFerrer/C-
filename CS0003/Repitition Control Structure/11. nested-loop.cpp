#include <iostream>
#include <conio.h>
using namespace std;
 
int main() {
    int i = 1, j;
    while (i <= 5) { // outer loop
        j = 1;
        while (j <= i) { // inner loop
            cout << j;
            j++; // Increment j by 1 which controls the number of digits printed in each line.
        }
        cout << endl;
        i++; // Increment i by 1 which controls the number of lines and the number of digits printer in each line.
    }
    getch(); // Waits for a key press before closing the console window, allowing the user to see the output before the program terminates.
    return 0;
}