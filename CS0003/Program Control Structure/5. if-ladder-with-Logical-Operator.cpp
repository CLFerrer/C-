#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter grade: ";
    cin >> grade;

    if (grade >= 91 && grade <= 100) { // Checks if the grade is between 91 and 100.
        cout << "Grade: A" << endl;
    } else if (grade >= 81 && grade <= 90) { // Checks if the grade is between 81 and 90.
        cout << "Grade: B" << endl;
    } else if (grade >= 70 && grade <= 80) { // Checks if the grade is between 70 and 80.
        cout << "  Grade: C" << endl;
    } else if (grade >= 0 && grade <= 69) { // Checks if the grade is between 0 and 69.
        cout << "Grade: F" << endl;
    } else {
        cout << "You've entered wrong data." << endl; // If the grade is less than 0 or greater than 100, it will display an error message.
    }

    // 91-100 = A | 81-90 = B | 70-80 = C | 0-69 = F | else = Invalid

    return 0;
}