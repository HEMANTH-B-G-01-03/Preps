// string upper case and lower case , count the number of upper case and lower case , 
//which is more then you convert the entire string into it . ie , 
//if upper case is more , then convt to upper case all else convert all to lower case .





// concept of ascii value   A->65   to Z->90      a->97 to z->122    upper to lower +32    lower to upper -32 

#include<iostream>
#include<string.h> 
using  namespace std;

string  convert(string a){
    int uppcount=0;
    int lowcount=0;
    int num=a.length();

    for(int i=0;i<num;i++){
         if(a[i]>=65 && a[i]<=90){
            uppcount++;
         }
         if(a[i]>97&&a[i]<=122){
            lowcount++;
         }

         if(uppcount>lowcount){
            for(int i=0;i<num;i++){
                if(a[i]>=65 && a[i]<=90){
                    a[i]=a[i]+32;
                }
            }
            if(lowcount>uppcount){
                 for(int i=0;i<num;i++){
                    if(a[i]>=97 && a[i]<=122){
                        a[i]=a[i]-32;
                    }
                 }
            }


         }
    }



    return a;
}

int main(){
    string a;
     cin>> a;
     string  sol=convert(a);
     cout<<sol;
    return  0;
}