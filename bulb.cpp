#include<iostream>
#include<math.h>
using namespace std;
int bulbson(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(ceil(double(sqrt(i)))==floor(double(sqrt(i)))){
            count++;
        }
    }
    //sqrt(n);
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;

    int ans=bulbson(n);
    cout<<ans<<endl;

   
    }
     return 0;
}





























// perfect sqare concept used here