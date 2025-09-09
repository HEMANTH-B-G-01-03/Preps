import java.util.*;
public class Learn {
   
    public static void main (String args[]) {
        String name ="tony";
        String f_name ="Tonay stark";
        String sentence = " its a long ... day aaaa. aaaa. aaaah... aaah ....";
        Scanner s = new Scanner(System.in);
        System.out.println("Who are you ?");
        System.out.println(name);
        System.out.println(sentence.length());


        // charAt 

        for(int i=0;i<sentence.length();i++){

            System.out.print(sentence.charAt( i) + " ");
        }
        System.out.println();


        //string comparision 

        String name1 ="tony";
        String name2= "Stark";

        if(name1.contains("s")) {
            System.out.println("it contains ");
        }
        else {
            System.out.println("it dosent contains ");
        }
          s.close();
    }
  
}
