import java.util.*;
public class New {




    public static void main(String args[]){

      int row , col ;
       
      Scanner sc = new Scanner(System.in);
      row = sc.nextInt();
      col= sc.nextInt();
      int arr[][] = new int [row][col];

      for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
          arr[i][j]=sc.nextInt();
        }
      }

      System.out.println();("The matrix is ");
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          System.out.print(arr[i][j]);
        }
        System.out.println();
      }

      System.out.println("Enter the number to be searched ");
      int search = sc.nextInt();

      for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++){
          if(arr[i][j]==search){
            System.out.println(("the element is found at the  index"+ i + " " + j));
          }
        }
      }
      

  sc.close();
    }
}