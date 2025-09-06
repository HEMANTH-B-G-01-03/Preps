import java .util.*;


// x to the power  value  using recursion 

public class Fibrcrr {
    public static int calPow(int x, int n) {
      if(n==0) {
         return 1 ;
      }
      if(x==0) {
        return 0 ; 
      }

        int xpow1 = calPow(x , n-1);
        int  xpow = x * xpow1;

    }
    public static void main(String[] args) {
          int x =2 ;
          int n = 5;
           int asn = calPow(x , n);
           System.out.println(asn);
    }
}
