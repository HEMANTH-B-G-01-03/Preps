//  a set of the coin denominations will be given 20 cen , 40 cen , 1d, 2d, 5d, 10d

// in put in the array  the quantity   , last the output must be the total amount in dollar , 
// note 100 cents = 1 

// like the input arrays will be given  in the form a stream  [ 1 ,1,1 ,1,1,1 ]  or [0,1,0,1,1 ,1]
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int n=6;
    int a[n];
    for( int i=0;i<n;i++){
        cin>>a[i];
    }
  
    vector <int> denomination={20,40,100,200,500,1000};

    float totalcen=0;
    for( int i=0;i<denomination.size();i++){
         totalcen+=a[i]*denomination[i];

    }
    float ans=totalcen/100.0;

    cout<<" the total dollar amount is "<<ans<<endl;
   
    


     return 0;
}