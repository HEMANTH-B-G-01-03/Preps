
#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n) {
    if (n < 2) {  // Prime numbers are greater than 1
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {  // Check divisibility up to the square root of n
        if (n % i == 0) {
            return false;  // n is divisible by i, so it's not prime
        }
    }
    return true;  // n is prime
}

int main(){
    int n ;
    cout <<"Enter the range till you want prime \n";
    cin>> n ;
     int sum =0;
    for(int i =1 ; i<=n;i++){
            if(isPrime(i)){
                sum+=i;

            }
           
        
    }
     cout<<"The Sum of Prime Numbers upto "<<n<<" is = " <<sum;
}