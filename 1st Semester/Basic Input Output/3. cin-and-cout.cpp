#include<iostream>
using namespace std;

int main() {
    float l, w, Area;

    cout << "Enter length and width: ";
    cin >> l >> w; // cin is used to take input from the user. It reads the values entered by the user and stores them in the variables l and w
    cout << "\n";
    Area = l * w; // This calculates the area of a rectangle by multiplying the length (l) and width (w) and stores the result in the variable Area

    cout << "The area of the rectangle\n";
    cout << "with dimensions " << l << " and " << w;
    cout << " is " << Area;

    return 0;
}