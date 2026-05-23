//  to remove the duplicate charecters in the ftring 
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    unordered_set<char> seen;
    string result = "";

    for (char ch : str) {
        if (ch == ' ') {
            result += ch;   // always keep spaces
            continue;
        }

        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result += ch;
        }
    }

    cout << result << endl;
    return 0;
}