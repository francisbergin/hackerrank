import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] a = new int[n];

        for (int i=0; i<n; i++) {
            a[i] = sc.nextInt();
        }

        int shifts = 0;

        for (int i=0; i<n; i++) {
            int j=i;
            while (j>0 && a[j-1] > a[j]) {
                shifts++;
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
                j--;
            }
        }

        System.out.println(shifts);

        sc.close();
    }
}
