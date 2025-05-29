// #include<iostream>
// #include<string.h>
// #include<strings.h>
// #include<algorithm>
// using namespace std;
// int main(){
//     string a ;
//     cin>>a;
//     string news=a;

//     reverse(news.begin(),news.end());
//     if(a==news){
//         cout<<"it is a palindrome";
//     }
//     else{
//          cout<<" it is not a palindrome ";
//     }

//     return 0;
// }


#include<iostream>
#include<string.h>
#include<strings.h>
#include<algorithm>
using namespace std;


bool ispalind(int n ) {
    int num = n;
    int rev =0 ;
        while(num!=0) {
            int rem = n % 10;
            rev = rev*10+rem;
            num /= 10;
        }
        if(rev== num){
            return true;
        }
        else {
            return false;
        }
}
int main(){
    int  n;
    cin>>n;
    
    if(ispalind(n))
    {
        cout<<"yes it is ";
    }
    else{
        cout<<"No it isnt";

    }
    return 0;
}