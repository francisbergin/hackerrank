import java.util.Scanner;

class Solution {
    private static int fac(int n) {
        if (n == 1) {
            return 1;
        } else {
            return n * fac(n-1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        System.out.println(fac(n));

        sc.close();
    }
}
