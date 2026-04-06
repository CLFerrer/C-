#include<iostream>
#include<math.h>
using namespace std;

int main() {
    // int to double (no data loss)
    int num_int = 9;
    double num_double;

    num_double = num_int;
    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    // double to int (data loss - decimal truncated)
    double num_double2 = 9.99;
    int num_int2;

    num_int2 = num_double2;
    cout << "num_int2 = " << num_int2 << endl;
    cout << "num_double2 = " << num_double2 << endl;

    return 0;
}