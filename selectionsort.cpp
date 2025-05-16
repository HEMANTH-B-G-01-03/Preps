
#include <iostream>
#include <string>
#include<vector>
using namespace std;
#include<algorithm>

void bubsort(int a[], int n ){
for(int i =0;i<n-1;i++){
  int small_idx=i; // unsoted
  for(int j=i+1;j<n;j++) {
    if(a[j]<a[small_idx]){
        small_idx = j;
    }
    swap(a[i],a[small_idx]);
  }

    }
}

void printarr(int a[], int n) {
    for( int i=0;i<n;i++){
        cout<<a[i];
    }
}
 int main (){

 int  n =5;
 int a[]= { 4 , 2 , 1 , 6 , 3 , 9};

 bubsort(a , n);
 printarr(a , n);
    return 0;
 }
