// rock paper sicoor  game 
//  R->P   P->S   S->R


#include<iostream>
#include<string.h> 
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

    
     string s;
     cin>>s;
     if(s=="rock"){
        cout<<"paper"<<endl;
     }
     else if(s=="siccor"){
        cout<<"rock"<<endl;
     }
     else if (s=="paper"){
         cout<<"siccor"<<endl;
     }
     else{ 
        cout<<""<<endl;
     }
    }
    return  0;
}