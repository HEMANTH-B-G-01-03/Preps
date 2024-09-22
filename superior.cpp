// you  have to say hw many superir elemts are there  

#include<iostream>
#include<iomanip>
using namespace std;
int findnumberofsuperirelement(int a[], int n){
    int count=0;
for(int i=0;i<n;i++){
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                count ++;
            }
            else{
                break;
            }
        }
        i=i+1;
    }

}

return count+1;
}
int main(){
int n;
 cin>>n;
  int a[n];
  for(int i =0;i<n;i++){
    cin>>a[i];
  }
  int sol=findnumberofsuperirelement( a,n);
  cout<<sol<<endl;

    return 0;
}