import java.util.*;

public class Upper {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter the text either in FULL CAPS or FULL LOWERCASE only:");
        String str = s.nextLine();

        boolean isLower = str.equals(str.toLowerCase());
        boolean isUpper = str.equals(str.toUpperCase());

        if (!(isLower || isUpper)) {
            System.out.println("Abe sale instruction to padle 😅 (Enter only full caps OR full lowercase)");
            return;
        }

        String res = "";

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if (ch >= 'a' && ch <= 'z') {
                ch = (char) (ch - 32); // lowercase → uppercase
            } else if (ch >= 'A' && ch <= 'Z') {
                ch = (char) (ch + 32); // uppercase → lowercase
            }
            res += ch;
        }

        System.out.println("After conversion: " + res);
    }
}
