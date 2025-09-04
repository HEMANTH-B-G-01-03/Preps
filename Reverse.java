import java.util.*;
public class Reverse {

    // public static Boolean multiply( int a ) {

    //     if(a<1) {
    //         return false;
    //     }

    //     for(int i=2;i*i<=a;i++) {
    //         if(a %i==0){
    //             return false;
    //         }

    //     }
    //     return true;

    // }
    public static void main(String args[]){
        
        StringBuilder s = new StringBuilder("hello");
        System.out.println("before reverse " +s);
        System.out.println("Enter the table number ");


        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        

        for(int i=1 ;i<=10;i++){
            System.out.println(n+" * "+i +" = " + n*i);
        }
      
        sc.close();

    }
}
