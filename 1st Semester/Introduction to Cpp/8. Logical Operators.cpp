#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int p = 1, q = 0; // 1 = true, 0 = false
    cout << "p = true, q = false" << endl;
        cout << "p && q (AND): " << (p && q) << " (false)" << endl;
        cout << "p || q (OR):  " << (p || q) << " (true)"  << endl;
        cout << "!p     (NOT): " << (!p)     << " (false)" << endl;
        cout << "!q     (NOT): " << (!q)     << " (true)"  << endl;
 
    // Practical: check if a number is between 1 and 100
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num >= 1 && num <= 100) {
        cout << endl << num << " is between 1 and 100." << endl;
    } else {
        cout << endl << num << " is NOT between 1 and 100." << endl;
    }
    return 0;
}