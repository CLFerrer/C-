#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2) { // n1 is greater than or equal to n2
        if (n1 >= n3)
            cout << "Largest number: " << n1 << endl; // n1 is greater than or equal to n3
        else
            cout << "Largest number: " << n3 << endl; // n3 is greater than n1
    } else { // n2 is greater than n1
        if (n2 >= n3)
            cout << "Largest number: " << n2 << endl; // n2 is greater than or equal to n3
        else
            cout << "Largest number: " << n3 << endl; // n3 is greater than n2
    }

    return 0;
}