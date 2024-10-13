// to remove the vowels from the given string 
#include <iostream>
#include<string>
#include<vector> 
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char> a;
    for( int i=0;i<s.length();i++){
        if(!(s[i]=='a'||s[i]=='e'|| s[i]=='i'|| s[i]=='u'||s[i]=='o')){
          a.push_back(s[i]);  
        }
        
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    return 0;
    
}