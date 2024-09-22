
// input 6   
//64,16,38,81,50,100         check  how many numbers are perfect square in the given array of elements 

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int is_square(int a[], int n ){
    int i;
    int count=0;
    for(i=0;i<n;i++){
        if(ceil(double(sqrt(a[i])))==floor(double(sqrt(a[i])))){
            count++;
        }
    }
    return count;

}


int main(){

    int n ,i;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

   int ans= is_square(a,n);

   cout<<ans<<endl;

     return 0;
}