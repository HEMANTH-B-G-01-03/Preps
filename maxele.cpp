// print the index value of the maz element 

#include<iostream>
#include<math.h>

using namespace std;
int  ele(int n, int a[] ){
    int max=a[1];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            return i;
        }   
    }
}
int main(){
 int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n;i++){
    cin>>a[i];
  }
 int  res=ele(n,a);
  cout<<res<<endl;
    return 0;
}