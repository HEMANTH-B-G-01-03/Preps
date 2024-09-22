#include<iostream>
#include<string.h> 
#include<math.h>

#include<algorithm>
#include<limits.h>
using  namespace std;


int main(){
   int n ;
   cin>>n;
   int a[n];
   int m;
   cin>>m;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   if(n==0||m==0){
    cout<<"0";
   }

   sort(a,a+n);

   if(n<m){
    return -1;
   }
   
   int min_diff=INT_MAX;

     for(int i=0;i+m-1<n;i++)
     {
          int diff=a[i+m-1]-a[i];
          if(diff<min_diff){
               min_diff=diff;
          }

     }
     cout<<min_diff;

    return  0;
}