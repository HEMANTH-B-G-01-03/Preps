

#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<conio.h>
using namespace std;


int solve(int i, int j , string &s1, string &s2, int &maxlen, int &idx, int count){
    

    // base case 
    if( i==s1.length()|| j==s2.length()){

        return count;
    } 

//1st possiblity if it matching 

  if(s1[i]==s2[j]){

    count=solve(i+1,j+1,s1,s2,maxlen,idx,count+1);
    

    if(count>maxlen){
        maxlen=count;   
        idx=i-maxlen+1; // to upodate the startin of the index
    }
  }


  int count1=solve(i+1,j,s1,s2,maxlen,idx,0);
  int count2=solve(i,j+1,s1,s2,maxlen,idx,0);
  
  return max(count,max(count1,count2));

}


int main(){
    string s1, s2;
    cin>>s1>>s2;
    int count ;

    int maxlen=0;
    int idx=0;

    int ans=solve(0,0,s1,s2, maxlen, idx ,0);

    string temp=s1.substr(idx,maxlen);
    
    //cout<<temp;

    int val=0;

    for(auto c: temp){
        val+=c;
    }

    cout<<val<<endl;

     return 0;
}
