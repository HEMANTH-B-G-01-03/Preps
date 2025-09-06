public class Rcee {
    public static int findsum(int n) {
        if (n <= 0) return 0;      // base case
        return n + findsum(n - 1); // use return value
    }
    public static void main(String[] args) {
        int n = 5;
        int res = findsum(n);
        System.out.println(res); // 15
    }
}
