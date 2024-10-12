#include <iostream>
#include<string>
using namespace std;
 int main(){
    string s;
    cin>>s;
    // pre compute 


    // int hashval[26]={0};
    // for(int i=0;i<s.size();i++){
    //     hashval[s[i]-'a']++;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     char c;
    //     cin>>c;
    //     //fetch 
    //     int ans=hashval[c-'a'];
    //     cout<<"coud of char "<<c<<"is"<<ans;
    // }


    // the bellow code is to find the occurance of all the chars in the strings 

int hashval[256]={0};
for(int i=0;i<s.size();i++)
{
    hashval[s[i]]++;

}

for(int i=0;i<s.size();i++){
cout<<"The count of Char    "<<s[i]<<" is "<<hashval[s[i]]<<endl;

}


    
    return 0;
 }