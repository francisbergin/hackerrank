import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- != 0) {
            int N = sc.nextInt();
            long sum = 0;
            int[] a = new int[N];

            for (int i=0; i<N; i++) {
                a[i] = sc.nextInt();
                sum += a[i];
            }

            boolean found = false;
            long lSum = 0;
            long rSum = sum - a[0];

            for (int i=1; i<N-1; i++) {
                lSum += a[i-1];
                rSum -= a[i];
                if (lSum == rSum) {
                    found = true;
                    break;
                }
            }

            if (found || N == 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        sc.close();
    }
}
