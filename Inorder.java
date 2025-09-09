import java.util.*;
public class Inorder {

    public static boolean order (int arr[] , int idx) {

            if(idx == arr.length-1){
                return true;
            }

        if(arr[idx] < arr[idx+1]){
            return order(arr, idx+1);
        }
        else 
        {
            return false ;
        }

    }
    public static void main(String args[]) {
        int arr [] = {1,2,3,4,5,6};
        int arr1[]={1,2,3,3,4,5};

        boolean res = order(arr1 , 0);

        if( res == true) {
            System.out.println("It is in order");
        }
        else {
            System.out.println("it is not in order ");
        }
    }
}
