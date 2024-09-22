#include<iostream>
#include<string.h>
#include<strings.h>
#include<algorithm>
using namespace std;
int main(){
    string a ;
    cin>>a;
    string news=a;

    reverse(news.begin(),news.end());
    if(a==news){
        cout<<"it is a palindrome";
    }
    else{
         cout<<" it is not a palindrome ";
    }

    return 0;
}