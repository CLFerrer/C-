#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a = 5, b = 2;
 
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << a + b << endl;   // Addition:       7
    cout << "a - b = " << a - b << endl;   // Subtraction:    3
    cout << "a * b = " << a * b << endl;   // Multiplication: 10
    cout << "a / b = " << a / b << endl;   // Division:       2 (integer division)
    cout << "a % b = " << a % b << endl;   // Remainder:      1
 
    // Fahrenheit to Celsius conversion: F = (9/5)*C + 32
    int C = 32;
    float F;
    F = (9.0 / 5) * C + 32;
    cout << "F (using 9.0/5): " << F << endl;  // 89.6
 
    F = (9 / 5) * C + 32;
    cout << "F (using 9/5):   " << F << endl;  // 64 (Integer Division)

    return 0;
}