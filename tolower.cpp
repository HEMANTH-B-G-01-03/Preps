#include<iostream>
#include<string.h> 
using  namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        s[i]=s[i]+32;
    }
    cout<<" to upper case is "<<endl;
    cout<<s<<endl;
    return  0;
}