import java.util.Scanner;

class Solution {

    private static long gcd(long a, long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i=0; i<t; i++) {
            long a = sc.nextLong();
            long b = sc.nextLong();
            long x = sc.nextLong();
            long y = sc.nextLong();

            if (gcd(a, b) == gcd(x, y))
                System.out.println("YES");
            else
                System.out.println("NO");
        }

        sc.close();
    }

}
