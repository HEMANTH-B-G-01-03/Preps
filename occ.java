import java.nio.channels.Pipe.SourceChannel;

public class occ {
public static void main(String args[]) {
    String s ="abaacdaefaah";
    char ele = 'd';

     int first =-1 ;
     int last = -1;
    for(int i=0;i<s.length();i++) {
        char currchar = s.charAt(i);

        if(ele == currchar ) {
        if(first==-1) {
            first = i;
        }
        else {
            last =i;
        }
    }
    }



    System.out.println("The first occurance of " +ele + " is at " + first);
    System.out.println("The Last occurance of " +ele + " is at" + last );
}    
}
