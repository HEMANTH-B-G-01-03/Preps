// given sum and array of elements print all the pairs in the array whoes sum is equal to that 'sum'


// ip 1,5,7,-1
// sum =6

// op (1,5) (7,-1) (1,5)

// 2,5,17, -1 
// sum =7
// op=2,5

#include <iostream>
#include<vector>
#include <unordered_set>
using namespace std;

int printparis(int a[], int n , int sum ){

    unordered_set<int> s;
    for(int i=0;i<n;i++){

        int temp=sum-a[i];
        if(s.find(temp)!=s.end())
        {
            cout<<"("<<temp<<" ,"<<a[i]<<")"<<endl;
        }
        s.insert(a[i]);
    }


}

int main(){
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // int sum;;
    // cin>>sum;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){                                 // it is an nail approach it is not optimal
    //         if(a[i]+a[j]==sum){
    //             return a[i],a[j];
    //         }
    //     }

    // }

int a[]={1,5,7,-1};
int sum=6;
int n =sizeof(a)/sizeof(a[0]);
printparis(a,n,sum);



     return 0;
}