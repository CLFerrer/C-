#include <iostream>
using namespace std;

int main() {
    // Integer variables
    int number1, number2;
    int x, y, z;
    number1 = 25; number2 = 23;
    number1 = number2;   // Number1 now holds 23
        x = y = z = 20;      // Multiple Assignment
 
    cout << "x " << x << endl;
    cout << "y " << y << endl;
    cout << "z " << z << endl;
    cout << "n1 " << number1 << endl;
    cout << "n2 " << number2 << endl;
 
    // Float and char
    float pi = 3.1416;
    char letter = 'A';
        cout << "Pi = " << pi << endl;
        cout << "Letter = " << letter << endl;

    return 0;
}