import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] a = new int[n];

        for (int i=0; i<n; i++) {
            a[i] = sc.nextInt();
        }

        boolean isInvolution = true;

        for (int i=0; i<n; i++) {
            if (i+1 != a[a[i]-1]) {
                isInvolution = false;
                break;
            }
        }

        System.out.println(isInvolution ? "YES" : "NO");

        sc.close();
    }
}
