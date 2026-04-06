#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    float result;
    float f1 = 1.105, f2 = 2.55;

    result = f1 + f2;

    // Setprecision and fixed manipulator are used to control the number of digits displayed after the decimal point.
    cout << fixed << setprecision(4) << result << endl; // 3.6550
    cout << fixed << setprecision(3) << result << endl; // 3.655
    cout << fixed << setprecision(2) << result << endl; // 3.66
    cout << fixed << setprecision(1) << result << endl; // 3.7
    cout << fixed << setprecision(0) << result << endl; // 4

    return 0;
}