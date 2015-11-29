import java.math.BigInteger;
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        BigInteger base = new BigInteger("2");

        for (int i=0; i<t; i++) {
            int n = sc.nextInt();
            BigInteger ans = base.pow(n).subtract(BigInteger.valueOf(1)).mod(BigInteger.valueOf(100000));
            System.out.println(ans);
        }

        sc.close();
    }
}
