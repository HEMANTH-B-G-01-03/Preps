// given a  sentence find the missing letter in it and return i , if there are no missing letters in it then 
// return 0 
#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence); // read entire line including spaces

    // Convert to lowercase
    for (char& ch : sentence) {
        ch = tolower(ch);
    }

    unordered_set<char> set;
    
    // Add only lowercase alphabet characters to the set
    for (char ch : sentence) {
        if (ch >= 'a' && ch <= 'z') {
            set.insert(ch);
        }
    }

    string result = "";
    
    // Iterate from 'a' to 'z' and check if each letter is in the set
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (set.find(ch) == set.end()) {
            result += ch;
        }
    }

    cout << result << endl;
    return 0;
}
