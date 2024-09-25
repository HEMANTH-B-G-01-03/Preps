#include <iostream>

using namespace std;

// Function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;

    // Accept input from the user
    cout << "Enter the number of disks: ";
    cin >> n;

    // Check for valid input
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "The sequence of moves to solve the Tower of Hanoi with " << n << " disks is:" << endl;
        towerOfHanoi(n, 'A', 'C', 'B'); // A is the source, C is the destination, B is the auxiliary
    }

    return 0;
}
