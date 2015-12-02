import java.math.BigInteger;
import java.util.Scanner;

class Solution {
    public static BigInteger factorial(int n) {
        BigInteger ans = BigInteger.ONE;

        for (int i=1; i<=n; i++) {
            ans = ans.multiply(BigInteger.valueOf(i));
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i=0; i<t; i++) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            BigInteger num = factorial(n+m-1);
            BigInteger den = factorial(n).multiply(factorial(m-1));

            BigInteger ans = num.divide(den).mod(BigInteger.valueOf(1000000007));

            System.out.println(ans);
        }

        sc.close();
    }
}
