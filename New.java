import java.util.*;
public class New {

  public static boolean isPrime(int n){
if(n<=1) {
  return false;
}
for(int i=2;i*i<=n;i++){
  if (n%i==0){
    return false;
  }

}
return true;

  }



    public static void main(String args[]){

      int range ;
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter the range");
      range = sc.nextInt()
;
for(int i=1 ;i <= range ; i++){
boolean prime = isPrime(i);
   if(prime == true){
    System.out.println(i + " is a prime number");
   }
   else{
    System.out.println(i + " is not a prime number");
   }
  }
  sc.close();
    }
}
