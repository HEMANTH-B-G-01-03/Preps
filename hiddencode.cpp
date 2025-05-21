// to find the longest substring 
// This code solves a Longest Common Substring problem recursively and returns the sum of ASCII values of the longest common substring between two given strings.

// ✅ Here's a suitable question for this code:
// ❓Question:
// You are given two strings s1 and s2. Write a program to find the longest common substring between these two strings using recursion. Then, compute and print the sum of the ASCII values of all characters in that substring.

// 📥 Input Format:
// First line: A string s1

// Second line: A string s2

// 📤 Output Format:
// Print a single integer: the sum of ASCII values of characters in the longest common substring.

// 🧪 Example:
// Input:
// nginx
// Copy
// Edit
// abcde
// abfde
// Output:
// Copy
// Edit
// 403
// 💡 Explanation:
// The longest common substring is "de"

// ASCII of 'd' = 100, 'e' = 101

// 100 + 101 = 201

⚠️ In this case, though, there's a longer match "ab" at the start, which sums to 195. If your code finds "de" instead, it might be due to order of matching — but the logic is correct for the purpose of finding the sum of ASCII values of any longest common substring.

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
