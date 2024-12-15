#include<iostream>
#include<algorithm>
#include<vector>
 using namespace std;
// to find the elemt in the 2 d arrat or multi d array
 int main(){
    int n ;
    cout<<"enter the number of type of matrix"<<endl;
    cin>>n;

     if( n=1){
    
        int p;
        cout<<" enter the number of elemets";
        cin>>p;
        int a[p];
       for( int i=0;i<n;i++){
        cin>>a[i];
       }
       int tar;
       cout<<" enter the target \n";
       cin>>tar;
       for( int i = 0;i<p;i++)
       {
        if(a[i]==tar){
            cout<<"elemt found at "<<i <<"th location \n"; 
        }
       }
     }
     else {
        vector<vector<int>> b;
        cout<<" enter the ni if rowas ans col \n";
        int q ,r;
        cin>>q>>r;
        for( int i=0;i<q;i++){
            for( int j=0;j<r;j++){
                cout<<"enter the element at the place ";
                cin>>b[i][j];
                
            }
            int tar;
            cout<<" enter the tar";
            cin>>tar;
            for( int i=0;i<q;i++){
                for( int j=0;j<r;j++){
                     if(tar==b[i][j]){
                         cout<<" found in the 2d arrayt";
                     }
                }
            }
        }
     }
    return 0;
 }