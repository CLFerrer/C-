#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "(5 == 1): " << (5 == 1) << " (false)" << endl;
    cout << "(5 >= 1): " << (5 >= 1) << " (true)"  << endl;
    cout << "(5 != 1): " << (5 != 1) << " (true)"  << endl;
    cout << "(5+10)==(3*5): " << ((5+10)==(3*5)) << " (true)"  << endl;
 
    // Practical use: checking a number
    int no;
    cout << "\nEnter a number: ";
    cin >> no;
 
    if (no >= 0) {
        cout << "The number is " << no << endl;
        cout << "It is a non-negative number." << endl;
    } else {
        cout << "The number is " << no << endl;
        cout << "It is a negative number." << endl;
    }

    return 0;
}