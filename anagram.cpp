/*
#include<iostream>
#include<string>
using namespace std;

bool anagram( string a, string b)
{

    if(a.length()!=b.length()){
         return false;
    }
    int freq[256]={0};
    for( int i=0;i<a.length();i++){
        freq[a[i]]++;
    }
    for(int i=0;i<b.length();i++){
        freq[b[i]]--;
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true ;

}
int main()
{
    // string a="abc";
    // string b="bcaasdf"; 
    string a , b;
    cout<<" enter the first string ";
    cin>>a;
    cout<<"enter the second string ";
    cin>>b;
  if(anagram(a,b)){
     cout<<" it is anagram ";
  }
  else {
     cout<<" it is not anagram ";
  }

    return 0;
}

*/

#include <iostream>
#include <string>
#include<vector>
using namespace std;

bool isana(string a , string b){
    if(a.length()!=b.length()){
        return false;
    }

    int freq[256]={0};
    for( int i=0;i<a.length();i++){
        freq[a[i]]++;
    }
    
    for(int i=0;i<256;i++){
        freq[b[i]]--;
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;

}
 int main (){
    string a="abcd";
    string b="ab";
    if(true){
        cout<<" it is anagram";
    }
    else{
        cout<<" it is not an anagram";
    }
    return 0;
 }



