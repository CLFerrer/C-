#include <iostream>
using namespace std;
 
int main() {
    int n = 10;
loop:
    cout << n << " ";
    n--;
    if (n > 0) // Loop continues as long as n is greater than 0
        goto loop; 
        // goto statement causes the program to jump back to the label "loop", which is before the print statement. 
        // This creates a loop that continues until n is no longer greater than 0.
    cout << "\nEnd of the Loop.";
 
    return 0;
}