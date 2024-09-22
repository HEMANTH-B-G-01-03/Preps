#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>

using namespace std;
int main(){

    int h, v, vn;

    cout<<"value of h v vn";
    cin>>h>>v>>vn;
    
    int hr;

    hr= h *pow((v/vn),2);    // power   pow(base, exponent value )

    cout<<hr<<endl;
    

     return 0;
}

//h=h*e^2n
//e^n=v/vn