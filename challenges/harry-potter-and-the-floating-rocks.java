import java.util.Scanner;

class Solution {
    public static long gcd(long a, long b) {
        if (b == 0)
            return a;
        return gcd(b, a%b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i=0; i<t; i++) {
            long x1 = sc.nextLong();
            long y1 = sc.nextLong();
            long x2 = sc.nextLong();
            long y2 = sc.nextLong();

            long ans = gcd(Math.abs(x2-x1), Math.abs(y2-y1)) - 1;
            System.out.println(ans);
        }

        sc.close();
    }
}
