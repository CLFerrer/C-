#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int y = 10, x = 3;
 
    cout << "Initial: y = " << y << ", x = " << x << endl;
 
    y += x;   // y = y + x  =>  y = 13
    cout << "After y += x:  y = " << y << endl;
 
    y -= 5;   // y = y - 5  =>  y = 8
    cout << "After y -= 5:  y = " << y << endl;
 
    y *= 2;   // y = y * 2  =>  y = 16
    cout << "After y *= 2:  y = " << y << endl;
 
    y /= x;   // y = y / x  =>  y = 5
    cout << "After y /= x:  y = " << y << endl;
 
    y %= 3;   // y = y % 3  =>  y = 2
    cout << "After y %= 3:  y = " << y << endl;

    return 0;
}