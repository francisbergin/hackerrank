import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i=0; i<t; i++) {
            int n = sc.nextInt();
            int ans = sc.nextInt();

            for (int j=1; j<n-1; j++) {
                ans *= sc.nextInt();
                ans %= 1234567;
            }

            System.out.println(ans);
        }

        sc.close();
    }
}
