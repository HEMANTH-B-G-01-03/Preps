// Question:
// Given an array of N integers, find the maximum possible Bitwise OR of any subset of the given array.

// Input (String):
// "N A1 A2 ... AN"

// Output:
// [Maximum OR value]

// Example 1:
// Input:
// "4 1 2 4 8"
// Output:
// 15
// (Explanation: The maximum OR is achieved by considering all elements: 1∣2∣4∣8=15.)

// Example 2:
// Input:
// "3 3 5 6"
// Output:
// 7
// (Explanation: The subset {3,5,6} gives 3∣5∣6=7.)




#include<stdio.h>
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int  main(){
    int n ;
    cin >>n ;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
   int res = 0;
   for (int num : a){
    res|=num;
   }
   cout <<res;
   
}