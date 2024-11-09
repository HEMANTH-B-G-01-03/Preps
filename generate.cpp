#include <iostream>
#include <string>
#include <vector>
using namespace std ;
std::vector<std::string> generateSubstrings(const std::string& s) {
    std::vector<std::string> substrings;
    
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
    std::vector<std::string> substrings = generateSubstrings(s);
    
    std::cout << "Substrings of \"" << s << "\":" << std::endl;
    for (const std::string& substring : substrings) {
        std::cout << substring << std::endl;
    }
    
    return 0;
}
