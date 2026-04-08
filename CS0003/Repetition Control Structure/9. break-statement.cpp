#include <iostream>
using namespace std;
 
int main() {
    int num = 1;
    while (num <= 50) { // Loop continues as long as num is less than or equal to 50
        cout << "Value of variable num is " << num << endl;
        if (num == 3) { // Check if num is equal to 3.
            break; // The break statement is encountered when the value of num is equal to 3.
        }
        num++; // Increment num by 1 in each iteration of the loop
    }
    cout << "Out of while-loop";
 
    return 0;
}