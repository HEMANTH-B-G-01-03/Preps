
public class occurance {

    public static int first = -1;
    public static int last = -1 ;
    public static void  findocc(String s ,int idx, char ele) {
        
            if(idx ==s.length()) {
                System.out.println("The first occurance is at " +first);
                System.out.println("The Last occurance is at " +last );
                return;
            }
        
        char currchar = s.charAt(idx);
        if(currchar == ele)
         {

        if(first == -1) 
        {
            first = idx;
        }

        else 
        {
            last = idx;
        }
    }

        findocc(s, idx+1, ele);
        
    } 
 public static void main(String args[]) {

    String s ="abaacdaefaah" ;
    char ele = 'a' ;
    findocc(s,0,ele);


 }   
}
