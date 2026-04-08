#include <iostream>
using namespace std;
 
int main() {
    int n;
    cout << "Enter the starting number: ";
    cin >> n;
    while (n > 0) { // While loop checks if the value of n is greater than 0.
        cout << n << " ";
        --n; // Decrements the value of n by 1 in each iteration.
    }
    cout << "\n End of countdown.";
 
    return 0;
}