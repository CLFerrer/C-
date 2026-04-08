#include <iostream>
using namespace std;
 
int main() {
    int start, end;
    cout << "Enter starting value: "; // Prompt user for starting value
    cin >> start;
    cout << "Enter ending value: "; // Prompt user for ending value
    cin >> end;
    do { // Loop body is executed at least once
        cout << start << " ";
        start++;
    } while (start <= end); // Loop continues until start exceeds end
 
    return 0;
}