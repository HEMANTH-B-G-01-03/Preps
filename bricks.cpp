// you  have been given an integer number n determine   the number  of bricks needed to  make a house of brick of N levels 
// refer to the bricks.png
// input 1  op 2 
// ip 3 op 15
// ip 2 op 7 

// so basically it is in the arithmatic progression , to be solved   


//  sn=n*[2a+(n-1)D]  / 2


#include<iostream>
using namespace std;

int bricks(int n){
    int a = 1;  // first term
    int d = 2;  // common difference
    int total_bricks = (n * (2 * a + (n - 1) * d)) / 2;
    return total_bricks;
}

int main(){
    int n;
    cin >> n;

    int res = bricks(n);
    cout << "The number of bricks is " << res << endl;
    return 0;
}
