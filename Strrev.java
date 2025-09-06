// reversiong the  string using recursion 
public class Strrev {
   
    public static void reversestr(String s, int index ) {

        if(index ==0) {
            System.out.print(index);
            return;
        }
        System.out.print(s.charAt(index)+" ");
        reversestr(s, index-1);

    }
    public static void main (String args[]) {
        
        String s = "hello";
        int index = s.length()-1 ;
        reversestr(s,index);
    }
}
