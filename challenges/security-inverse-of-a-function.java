import java.util.Arrays;
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        Integer[] a = new Integer[n];

        for (int i=0; i<n; i++) {
            a[i] = sc.nextInt();
        }

        for (int i=1; i<=n; i++) {
            System.out.println(Arrays.asList(a).indexOf(i)+1);
        }

        sc.close();
    }
}
