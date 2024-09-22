#include<iostream>
#include<string>
#include<conio.h>
using  namespace std;

void printstar();
int main(){

    printstar();
      return 0;
}

void printstar(){
    int i ,j,n,m;
    cout<<"enter the row and columns ";
    cin>>n>>m;
    for( i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==0||j==0||i==n||j==m){
                 cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<" "<<endl;
    }
}