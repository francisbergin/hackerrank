import java.util.Scanner;

class Solution {
    public static long numDivisorsDivByTwo(long n) {
        if (n % 2 != 0)
            return 0;

        long cnt = 0;

        for (int i=1; i<=Math.sqrt(n); i++) {
            if (n % i == 0) {
                if (i % 2 == 0)
                    cnt++;
                if (n/i != i && n/i % 2 == 0)
                    cnt++;
            }
        }

        return cnt;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i=0; i<t; i++) {
            long n = sc.nextLong();
            System.out.println(numDivisorsDivByTwo(n));
        }

        sc.close();
    }
}
