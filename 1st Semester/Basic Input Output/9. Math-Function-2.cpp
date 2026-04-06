#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float x = 3.42, y = -2.67;
    float val = 2.3;
    double a = 1.411, b = 1.500, c = 1.611;
    double na = -1.411, nb = -1.500, nc = -1.611;

    cout << "abs(): "   << abs(x)    << endl;  // 3
    cout << "fabs(): "  << fabs(y)   << endl;  // 2.67

    cout << "Floor: "   << floor(val) << endl; // 2
    cout << "Ceiling: " << ceil(val)  << endl; // 3

    cout << "trunc(1.411)="  << trunc(a)  << endl; // 1
    cout << "trunc(-1.411)=" << trunc(na) << endl; // -1

    cout << "round(1.411)="  << round(a)  << endl; // 1
    cout << "round(1.500)="  << round(b)  << endl; // 2
    cout << "round(-1.500)=" << round(nb) << endl; // -2

    return 0;
}