import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i1=0; i1<t; i1++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();

            int total = a+b;

            System.out.print(total);

            for (int i2=1; i2<n; i2++) {
                total += Math.pow(2, i2) * b;
                System.out.print(" " + total);
            }

            System.out.print("\n");
        }

        sc.close();
    }
}
