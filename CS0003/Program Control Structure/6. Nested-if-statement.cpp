#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int magic, guess;
    magic = rand(); // Generates a random number and assigns it to the variable magic.

    cout << "Enter your guess: ";
    cin >> guess;

    if (guess == magic) { // Checks if the user's guess is equal to the magic number.
        cout << "You're right. " << endl;
        cout << magic << " is the magic number." << endl; // 
    } else {
        if (guess > magic)
            cout << "Your guess is higher." << endl; // Checks if the guess is higher than the magic number.
        else
            cout << "Your guess is lower." << endl; // Checks if the guess is lower than the magic number.
    }

    return 0;
}