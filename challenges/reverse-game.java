import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i=0; i<t; i++) {
            int n = sc.nextInt();
            int k = sc.nextInt();

            System.out.println((k < n/2) ? (k*2 + 1) : ((n-k-1)*2));
        }

        sc.close();
    }
}
