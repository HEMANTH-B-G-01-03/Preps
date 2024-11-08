//153 yes since 1^3+5^3+3^3 =153

#include<iostream>
#include<conio.h>
using namespace std;
string arm(int n){


int temp=n;

int sum=0;

while(n>0){

int m=n%10;
sum=sum+(m*m*m);
n=n/10;
}
if(temp==sum){
    return "yes it is armstrong number";
}
else{
return "no it is not an armstrong number ";
}

}


int main(){
    int n;
    cin>>n;
    string ans=arm(n);
    cout<<ans<<endl;
    return 0;
}