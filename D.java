import java.util.*;

public class D {
    public static void main(String[] args) {
        int a = 10 ;
        int b= 0;
        try {
            int res=a/b;
            
        }
        catch(Exception e) {
                System.out.println("devide by zerro error ");
        }
        finally {
            System.out.println("This is finally block");
        }
    }
}