import java.util.Scanner;

class Solution {
    private static long numDivisors(long n) {
        long cnt = 0;

        for (int i=1; i<=Math.sqrt(n); i++) {
            if (n % i == 0) {
                cnt++;

                if (n/i != i) {
                    cnt++;
                }
            }
        }

        return cnt;
    }

    private static long triangular(long n) {
        return (n*(n+1))/2;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i=0; i<t; i++) {
            int n = sc.nextInt();

            long k = 0;
            long ans = 0;

            while (ans <= n) {
                k++;

                if (k % 2 == 0) {
                    ans = numDivisors(k/2) * numDivisors(k+1);
                } else {
                    ans = numDivisors(k) * numDivisors((k+1)/2);
                }
            }

            System.out.println(triangular(k));
        }

        sc.close();
    }
}
