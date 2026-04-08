#include <iostream>
using namespace std;
 
int main() {
    int sum, x;
    sum = 0;
    cout << "Enter number: ";
    cin >> x;
    while (x != 99) { // Sentinel value of 99 is used to indicate the end of input.
        sum = sum + x;
        cin >> x;
    }
    cout << "The sum: " << sum;
 
    // The program prompts the user to enter numbers and continues to read and add them to the sum until the user enters 99 
    // The sentinel value that signals the end of input. 
    // It outputs the total sum of the entered numbers (excluding the sentinel value).

    return 0;
}