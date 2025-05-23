#include<stdio.h>
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int inc(int a[] , int n ){

    int count=0;

    for(int i=0;i<n;i++) {
       int min = 0;
        if(a[i]>a[min]){
            min=i;
            count++;
        }
    }
    return count;
    
}

int main(){
    int n ;
    cin>>n;
    int a[n];
    for(int i =0 ;i<n;i++) {
        cin>>a[i];
    }
    int res = inc(a,n);
    cout<<res;
}