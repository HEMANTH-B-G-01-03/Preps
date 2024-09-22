#include<iostream>
#include<iomanip>
using namespace std;
int pieces(int n ){
    int piece=0;
    if(n==0){
        return 1;
    }
    else if(n==1){
         return 2;
    }
    else
         return ((n*(n+1))/2) +1;
    
    
     
}
int main(){
    int n;
    cin>> n;
    int sol=pieces(n);
    cout<<sol;
    return 0;
}