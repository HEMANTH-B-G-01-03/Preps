#include <iostream>
#include <cmath>  // for sqrt
using namespace std;

bool prime(int n) {
    if (n < 2) {  // Prime numbers are greater than 1
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {  // Check divisibility up to the square root of n
        if (n % i == 0) {
            return false;  // n is divisible by i, so it's not prime
        }
    }
    return true;  // n is prime
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    
    while (t--) {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        
        bool res = prime(n);
        
        if (res) {
            cout << n << " is prime." << endl;
        } else {
            cout << n << " is not prime." << endl;
        }
    }
    
    return 0;  // Return statement outside the loop
}
