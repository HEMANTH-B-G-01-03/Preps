#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int fibonacci(int n){
    int sum =0;
    int a = 0 , b =1 ;
    if(n >= 1) {
        cout<<a<<" ";
    }
    else if ( n >= 2 ) {
        cout <<b<<" ";
    }
    else 
    {
        for(int i = 3;i<=n;i++) {
            sum = a + b ; 
            cout<<sum<<",";
          
            a=b;
             b = sum;
        }

    }
}

int main () {
    int n ;
    cout<<"Enter the number \n";
    cin>>n;
    int res = fibonacci(n);

}