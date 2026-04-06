#include<iostream>
using namespace std;

int main() {
    float res;
    float f1 = 15.5, f2 = 2;

    res = (int)f1 / (int)f2;   // casts both to int before dividing
    cout << res << endl;        // Output: 7

    res = (int)(f1 / f2);      // casts result to int
    cout << res << endl;        // Output: 7

    res = f1 / f2;             // normal float division
    cout << res;               // Output: 7.75

    return 0;
}