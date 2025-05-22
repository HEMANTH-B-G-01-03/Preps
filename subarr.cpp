// Sum of XOR of All Subarrays of Length K

// Question:
// Given an array A of size N and an Integer K, find the sum of XOR values of all contiguous subarrays of length K.

// Input (String):
// "N K A1 A2 ... AN"

// Where:

// N -> Number of elements in the array.
// K -> Size of the subarrays.
// A1, A2, ..., AN -> The array elements.
// Output:
// [Sum of XOR of all subarrays of length K]

// Example 1:

// Input: "5 3 1 2 3 4 5"
// Output: 12 (Explanation:
// XOR of [1, 2, 3] -> 1 ⊕ 2 ⊕ 3 = 0
// XOR of [2, 3, 4] -> 2 ⊕ 3 ⊕ 4 = 5
// XOR of [3, 4, 5] -> 3 ⊕ 4 ⊕ 5 = 6
// Total Sum: 0 + 5 + 6 = 12.)
// Example 2:

// Input: "4 2 4 5 7 8"
// Output: 19

#include<iostream>
#include<string> 
#include<vector>
using namespace std;

int main(){

    int n , k ;
    cin>>n>>k;
    int a[n];
    for( int p=0;p<n;p++)
    {
        cin>>a[p];
    }    

    int totsum = 0 ;
    
    for(int i=0;i<n-k;i++){
        int currxor=0;
        for(int j=i;j<i+k;j++){
            currxor^=a[j];
        }
        totsum+=currxor;
    }
    cout<<"the sum is "<<totsum; 
    return 0;

}
