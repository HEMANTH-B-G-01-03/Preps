#include<iostream>
#include<unordered_set>
using namespace std;
string eleminatestring(string &s1, string &s2){
unordered_set<char> charset;
for(char c: s2){
    charset.insert(c);
}
string res;
 for(char c :s1){
    if(charset.find(c)==charset.end()){
        res+=c;
    }
 }   
 return res;
}
int main(){
    string s1,s2;
    cout<<"Enter the first string to be inserted \n";
    cin>>s1;
    cout<<" Enter the string to be removed \n";
    cin>>s2;
    string output=eleminatestring(s1,s2);
    cout<<output<<endl;
    return 0;
}