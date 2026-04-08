#include <iostream>
using namespace std;

int main() {
    int counter, sum = 0, num;
    cout << "Enter numbers: ";
    for (counter = 1; counter <= 3; counter++) { // For loop initializes counter to 1, checks if counter is less than or equal to 3, and increments counter by 1 in each iteration.
        cin >> num;
        sum = sum + num;
    }
    cout << "Sum : " << sum;
 
    return 0;
}