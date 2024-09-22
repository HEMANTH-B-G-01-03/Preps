// program to reverse a number 
#include<iostream>
using namespace std;
int reversenum(int n){
  int rev=0;
while(n!=0){
  int rem =n%10;
  rev=rev*10+rem;
  n=n/10;
}
return rev;
}

int main (){
int n ;
cout<<"enter the number "<<endl;
cin>>n;
int ans=reversenum(n);
cout<<ans<<endl;
return 0;

}