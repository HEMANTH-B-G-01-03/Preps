// using the concept of hasing we will be solving this 

// size of arr 5 ,  element in i t 1 3 2 1 3 , 5 elemts ot be counted ,  the elements are  1 4 2  3 12

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
     int a[n];
      for (int i=0;i<n;i++){
        cin>>a[i];
      }

      // precomputing usin hash 
int hash[13]={0};
for(int i=0;i<n;i++){
     hash[a[i]]+=1;
}
      int q;
      cin>>q;
      while(q--){
        int number;
         cin>>number;
         //fetching 
         cout<<hash[number]<<endl;
      }






     return 0;
}