import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i=0; i<t; i++) {
            int l = sc.nextInt();
            int b = sc.nextInt();
            int a = l*b;

            int n = 0;

            for (int s=1; a/(s*s) > 0; s++) {
                int s2 = s*s;
                if (a%s2 == 0 && l%s == 0 && b%s == 0) {
                    n = a/s2;
                }
            }

            System.out.println(n);
        }

        sc.close();
    }
}
