#include <iostream>
#include <string>
#include <vector>
using namespace std ;
vector<string> generateSubstrings(const string& s) {
  vector<string> substrings;
    
    // Loop over each possible start index `i`
    for (int i = 0; i < s.size(); i++) {
        // Loop over each possible end index `j`
        for (int j = i; j < s.size(); j++) {
            substrings.push_back(s.substr(i, j - i + 1));
        }
    }
    
    return substrings;
}

int main() {
string s;
cout<<"enter the string from which the substring to be created "<<endl;
 cin>> s;
    vector<string> substrings = generateSubstrings(s);
    
  cout << "Substrings of \"" << s << "\":" << endl;
    for (const string& substring : substrings) {
        cout << substring << endl;
    }
    
    return 0;
}
