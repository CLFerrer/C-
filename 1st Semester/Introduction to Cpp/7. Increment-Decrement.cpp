#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a = 21;
    int c;
 
    // Postfix: value of a is used BEFORE incrementing
    c = a++;
    cout << "Postfix - Value of a++ is: " << c << endl;  // 21
 
    // After postfix: a is now incremented
    cout << "After Postfix - Value of a is: " << a << endl;  // 22
 
    // Prefix: value of a is incremented BEFORE assignment
    c = ++a;
    cout << "Prefix- Value of ++a is: " << c << endl;  // 23
 
    // Decrement Examples
    int x = 5;
    cout << "x--: " << x-- << endl;  // Prints 5, then x becomes 4
    cout << "--x: " << --x << endl;  // x becomes 3, then prints 3

    return 0;
}