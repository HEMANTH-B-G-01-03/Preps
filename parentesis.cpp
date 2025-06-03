#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> a;  // Use a vector to simulate a stack for storing opening brackets
        
        // Iterate through the string
        for (int i = 0; i < s.length(); i++) {
            // If it's an opening bracket, push it to the stack
            if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
                a.push_back(s[i]);
            } 
            // If it's a closing bracket, check the stack
            else {
                if (a.empty()) return false;  // Stack can't be empty when encountering a closing bracket
                
                // Get the top element from the stack (last inserted opening bracket)
                char top = a.back();
                
                // Check if the top matches the corresponding closing bracket
                if (
                    (s[i] == '}' && top != '{') ||
                    (s[i] == ')' && top != '(') ||
                    (s[i] == ']' && top != '[')
                    ) 
                    {
                    return false;
                }
                
                // If matched, pop the top element
                a.pop_back();
            }
        }
        
        // At the end, the stack should be empty if all brackets were matched correctly
        return a.empty();
    }
};
