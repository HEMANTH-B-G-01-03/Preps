// Harshad Number mean a number devivisble by sum of its digits
// 18 1+8 =9 18/9 =2 so true 
#include <iostream>
#include <vector>
using namespace std;
bool isHarsh(int n) {
    int sum = 0 ;
    int temp=n;
    while (temp>0)
    {
        sum+=temp%10;
        temp/=10;
    }
  return (n % sum==0);  
}
int main(){
    int n ;
    cin>>n;

    bool res = isHarsh(n);
    if(res == true) {
        cout<<"yes";
    }
    else {
        cout<<"no";
    }
}