// remove charecter to check palindrome or not 

#include <iostream>
#include <string>
using namespace std;

// Function to check if a substring is a palindrome
bool isPalindrome(const string& s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) {
            return false; // Characters do not match, so it's not a palindrome
        }
        left++;  // Move the left pointer to the right
        right--; // Move the right pointer to the left
    }
    return true; // All characters matched, it is a palindrome
}

// Main function to check if we can make the string a palindrome
bool validPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            // If characters don't match, check both possibilities
            return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
        }
        left++;  // Move pointers towards the center
        right--;
    }

    return true; // If no mismatches were found, it's already a palindrome
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input; // Get user input

    if (validPalindrome(input)) {
        cout << "Yes, it can be made a palindrome by removing at most one character.\n";
    } else {
        cout << "No, it cannot be made a palindrome by removing just one character.\n";
    }

    return 0;
}
