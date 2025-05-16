
#include <iostream>
#include <string>
#include<vector>
using namespace std;
#include<algorithm>

void bubsort(int a[], int n ){
for(int i =0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
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



