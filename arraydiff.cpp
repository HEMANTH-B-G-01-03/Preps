#include<iostream>
using namespace std;
int main(){
   int n=5;
   int a[n],b[n];
   for( int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n;i++){
    cin>>b[i];
   }

//    for( int element :a){
//      cout<<element<<" ";
//    }
//    for( int element : b){
//     cout<<element<<" ";
//    }

int diff=0;
for ( int i=0;i<n;i++){
    if(a[i]!=b[i]){
        diff=a[i]-b[i];
        if(a[i]>diff){
            b[i]+=diff;
            
        }else{
            a[i]+=diff;
        }
    }

}
cout<<"therefore"<<diff<<" msut be added at the ind  to make it equal";
     return 0;
}