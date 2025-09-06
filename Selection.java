import java.util.*;
public class Selection {

    public static void printnumber( int arr[]) {
        for (int i=0;i<arr.length;i++){
            System.out.print(i+" ");
        }
        System.out.println();
    }
    public static void main(String args[]) {
        int arr[] = { 7,4 , 3 , 9 ,1};
        int n = arr.length;
        for( int  i=0 ;i <n-1;i++) {
            int small_index = i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[small_index]){
                    small_index=j;
                }
            }
            int temp =arr[i];
            arr[i]=arr[i+1];
            arr[i+1] = temp;
        }

        printnumber(arr);

    }
}
