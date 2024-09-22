#include <iostream>
#include<bits/stdc++.h>
#include<limits.h>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v; 
    v.push_back(1);
    for (int i=2;i<n;i++){
        v.push_back(v.back()^i);
    }
    int sum =0;
    for(auto x:v){
        sum=sum+x;
    }
    cout<<sum;
     return 0;
}
