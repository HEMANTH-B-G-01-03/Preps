#include<iostream>
#include<string>
using namespace std;

int main(){
    int n ;
    cin>>n ;

int count =0;
string s ;
cin>>s;


for(int i =0 ;i <n;i++) {
    int sum =0;
    for(int j=i;j<n;j++) {
        sum+=s[j] - '0';
        if(sum==(j-i+1)){
            count++;
        }
    }
}
cout<<count<<endl;
return 0;
}