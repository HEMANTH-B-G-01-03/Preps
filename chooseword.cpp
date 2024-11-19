#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of words

    vector<string> a(n);  // Use vector for dynamic array of strings

    // Read the words into the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    string start = "start";
    string end = "stop";

    vector<string> res;  // To store the resulting filtered words

    bool isbetween = false;  // Flag to check if we're between "start" and "stop"

    // Loop through the words and apply the filtering conditions
    for (int i = 0; i < n; i++) {
        if (a[i] == start) {
            isbetween = true;
            continue;  // Skip the "start" word
        }
        if (a[i] == end) {
            break;  // Stop when we reach the "stop" word
        }
        if (isbetween && a[i].length() > 2 && a[i].length() < 4) {
            res.push_back(a[i]);  // Add the word to result if it meets length criteria
        }
    }

    // Output the filtered words
    for (const string& word : res) {
        cout << word << " ";
    }

    return 0;
}
