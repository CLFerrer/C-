#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int magic, guess;
    magic = rand(); // Generates a random number and assigns it to the variable magic.

    cout << "Enter your guess: " << endl;
    cin >> guess;

    if (guess == magic) { // Checks if the user's guess is equal to the magic number.
        cout << "Correct!. " << endl;
        cout << magic << " is the magic number." << endl;
    } else {
        cout << "Wrong guess, try again. " << endl;
        cout << "The magic number is " << magic << "." << endl;
    }

    return 0;
}