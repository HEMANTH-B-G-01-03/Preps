#include<iostream>              // this is simlar to fibonacci series 
#include<iomanip>
#include<bits/stdc++.h>
using  namespace std;
int climb(int n){

     int rec_call1=climb(n-1);
     int rec_call2=climb(n-2);
     int ans =rec_call1+rec_call2;
     return ans;

}
int main(){

    int n;
    cin>>n;
    if(n==1){
         cout<<"1"<<endl;
    }
    else if(n==2){
         cout<<"2"<<endl;
    }
    else{
        int res=climb(n);
        cout<<res<<endl;
    }
    
    return 0;
}
