#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std ;
int times(string a, char b ){
int count =0;
int size=a.size();

for( int i=0;i<size;i++){
       char currchar=a[i];
       if (currchar==b){
        count++;
       }
    }
    return count ;
}

int main(){
    string a;
    cin>>a;
    char b;
    cout<<"enter the letter to be searched "<<endl;
    cin>>b;
    int ans=times(a,b);
    cout<<ans<<endl;
     return 0;
}