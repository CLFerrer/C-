#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int a, p;
    float sq;

    cout << "Input a number: ";
    cin >> a;

    p = pow(a, 2);
    sq = sqrt(a); // This calculates the square root of a and stores it in the variable sq.

    cout << a << " raised to 2 is " << p;
    cout << "\nThe square root of " << a << " is " << sq << endl;

    return 0;
}