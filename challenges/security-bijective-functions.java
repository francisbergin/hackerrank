import java.util.Arrays;
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] a = new int[n];

        for (int i=0; i<n; i++) {
            a[i] = sc.nextInt();
        }

        Arrays.sort(a);
        boolean ok = true;

        for (int i=0; i<n; i++) {
            if (a[i] != i+1) {
                ok = false;
                break;
            }
        }

        if (ok) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

        sc.close();
    }
}
