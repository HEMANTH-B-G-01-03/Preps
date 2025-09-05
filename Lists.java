import java.util.*;
public class Lists {
    public static void main (String args[]) {
        
        // array list begin 

        List <String> list = new ArrayList<>();

        // to insert  we use add();    or add(E e) and add(int index, E e)

        list.add("Apple");
        list.add("samung");
        list.add("Poco");
        list.add("LG");

        // to display all of them 
            for(int i=0;i<list.size();i++) {
                System.out.println("The items in the array lists are " + list.get(i));
            }

            // To access the elemts we use .get(index number);

            System.out.println(list.get(1));

//             4. Updating / Modifying Elements
// list.set(1, "JavaScript"); // replaces element at index 1

list.set(0,"Huwai");

System.out.println("after changing at index 0"+list.get(0));


// deleting the elements we use .remove 
list.remove(2); 
// to remove all the elements  we use .clear()

// list .clear();



// System.out.println(list.size());  // number of elements
// System.out.println(list.isEmpty()); // check if empty



    }
}
