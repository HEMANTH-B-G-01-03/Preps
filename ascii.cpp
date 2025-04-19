#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std ;

int main(){
   // int a []= {796115110113721110141108}
    int n ;
    cin>>n;
    //24 
    int a[n];cout<<" enter the ascivalue";
    for( int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"reversed is "<<endl;

    for(int i=n;i>0;i--){
        cout<<a[i-1]<<" ";
    }
    
    vector<char> ans;
    int i=0 ;
 while(i<n){
        int x =a[i]+a[i+1];
        if(a[i]>=65 && a[i]<=90){
            ans.push_back((char32_t)a[i]);
        }
        if(a[i]>=97 && a[i]<=122){
            ans.push_back((char32_t)a[i]);

        }
        i++;
  
    }

    
    
    
    return 0 ;
}