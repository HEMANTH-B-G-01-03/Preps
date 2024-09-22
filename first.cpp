#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int printname();
int caclll();

 int main(){
    printname();
    caclll();
    
     return 0;
 }
 int caclll(){
     double a,b, res;
     char op;
     cout<<" enter the two numbr and operators "<<endl;
     cin>>a>>b>>op;
     if(op=='+'){
        res=a+b;
        cout<<res;
     }
     else if(op=='-'){
        res=b-a;
        return res;
     }
     else if(op=='*'){
        res=a*b;
        cout<<res;
     }
     else if (op=='/'){
        res=b/a;
        return res;
     }
     else{
       cout<<"enter the correct expression u f";
     }
     
     return 0;
 }


 int printname(){
    string a , b ;
    cout<<" enter two strings "<<endl;
    cin>>a>>b;
    cout<<a<< " and "<<b<<" are made for each other "<<endl;
    string c;
    cout<<" after concatenationg \t"<<a+b<<endl;
 }