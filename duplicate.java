public class duplicate {

    public static boolean map[] = new boolean[26];

    public static void remove(String s , int idx , String newstring) {

        if(idx == s.length())
{
System.out.println(newstring);
}
        char curr = s.charAt(idx);
        if(map[curr-'a']==true) {
            remove(s, idx+1, newstring);
        }
        else {
            newstring+=curr;
            map[curr-'a']=true;
            remove(s,idx+1,newstring);
        }

    }

    public static void main(String args[]) {
        String s ="abbccdda";
        remove(s, 0, " ");

    }
}
