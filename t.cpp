
#include<iostream>
#include <vector>
#include<set>
using namespace std ;




int main(){

  
    int n ;
     cin>>n;
     int arr[n]={0};
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int count=0;
     int target;
     cin>>target;
     
    set<int> ansfind;
    for(int i=0;i<n;i++){
        ansfind.insert(arr[i]);
    }

    for(int i=0;i<n;i++){

           int complement = target - arr[i];

        
        if (ansfind.count(complement)) {
            count++;
            ansfind.erase(arr[i]); 
        }
    }

cout<<count;

    return 0;
}