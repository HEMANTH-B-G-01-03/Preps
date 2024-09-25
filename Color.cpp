// the input is the 2 srings s and the instruction t 

#include<iomanip>
#include<iostream>
using namespace std ;

int main(){
string a,t;
cin>>a>>t;
int j=0, k=1;
for(int i=0;i<t.size();i++){
    if(t[i]==a[j]){
        k++;
        j++;
    }
}

cout<<k<<endl;
    return 0;
}