// Imp asked in company
// meta number s are  the nunbers that are devisible by 1,2,4,8 only and not by 10
// find the number of meta mubers in the given range.
#include<iostream>
#include<string.h> 
using  namespace std;

int main(){
   int n;
   cin>>n;
   int count=0;
   for(int i=1;i<=n;i++){
        if(i%1==0 && i%2==0&& i%4==0 && i%8==0  && i%10!=0){
            count++;
        }
   }
   cout<<" the number of ,eta number in the range"<<n<<" are "<<count<<endl;
    return  0;
}