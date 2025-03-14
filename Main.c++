//given 2strings of lowercase select exactly  one non-empty substring  of s  and replce each charecter of it  with the previous charecter of the english alphabet For 
// find the lecological smallest sring that can be obtained  after performing   the above operation exactly once 
// lexicograpghical oreder means like a, b , c , d , e , f , g , h , i , j , k , l , m ... 

#include <iostream>
#include <string>
#include <cstring>  // Required for strcpy()
#include<vector>
using namespace std;

string ans(string s) {

    vector <char> charArray(s.begin(),s.end());

    int n = charArray.size();
    bool converted = false;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            break;
        }
        charArray[i] = (char)(charArray[i] - 1); 
        if (!converted) {
            charArray[n - 1] = (char)(charArray[n - 1] - 1); 
        }
    }

    return string(charArray.begin(),charArray.end()); 
}

int main() {
    string s1 = "hackerrank";

    string res = ans(s1);

    cout << res << endl;

    return 0;
}

