#include<stdio.h>
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int start(std::string a, std::string b) {
    // Store all unique characters from string b into a hash set for efficient lookups.
    std::unordered_set<char> d;
    for (char c : b) {
        d.insert(c);
    }

    int count = 0;
    // Iterate through each character in string a
    for (char c : a) {
        // If character 'c' from string 'a' is NOT found in the set of characters from 'b'
        if (d.find(c) == d.end()) {
            count++; // Increment the count
        }
    }
    return count;
}

int main(){
    string a , b;
    cout<<"enter 1s one ";
    cin >>a ;
cout<<"enter 2nd one ";
    cin>>b;

    int res = start(a,b);
    cout<<res;
}