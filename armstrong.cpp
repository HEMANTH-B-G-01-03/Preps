//153 yes since 1^3+5^3+3^3 =153

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
bool arm(int n , int count){
int temp=n;
int sum=0;
while(n>0){
int m=n%10;
sum+=pow(m,count);
n=n/10;
}
return (sum == temp);

}

int main(){
    int n;
    cout<<" enter the number to checked ";
    cin>>n;
   
    int count = 0;
    while(n>0){
        count++;
        n/=10;
    }
     bool ans=arm(n , count);

   if(ans == true){
    cout<<"yes it is armstrong number";
}
else{
cout<<"no it is not an armstrong number ";
}
    return 0;
}