//153 yes since 1^3+5^3+3^3 =153

#include<iostream>
#include<conio.h>
using namespace std;
bool arm(int n){
int temp=n;
int sum=0;
while(n>0){
int m=n%10;
sum=sum+(m*m*m);
n=n/10;
}
return (sum == temp);

}

int main(){
    int n;
    cout<<" enter the number to checked ";
    cin>>n;
    bool ans=arm(n);
   if(ans == true){
    cout<<"yes it is armstrong number";
}
else{
cout<<"no it is not an armstrong number ";
}
    return 0;
}