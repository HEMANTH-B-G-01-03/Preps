import java.util.*;
import java.util.ArrayList;
import java.util.LinkedList;
public class Lists {
    public static void main (String args[]) {
        
        // array list begin 

        List <String> list = new ArrayList<>();

        // to insert  we use add(); 

        list.add("Apple");
        list.add("samung");
        list.add("Poco");
        list.add("LG");

        // to display all of them 
            for(int i=0;i<list.size();i++) {
                System.out.println("The items in the array lists are " + list.get(i));
            }

            // To access the elemts we use .get(index number);

            

    }
}
