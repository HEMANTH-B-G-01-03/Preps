// reverse the string without inbuilt function 
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    string a = "hemanth";
    int n = a.length();
    cout<<"Original string is "<<a<<endl;
    for( int i =0 ;i<n/2;i++){
        char temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i] = temp;
    }
    cout<<"there fore the reverse string is "<<a<<endl;

}
