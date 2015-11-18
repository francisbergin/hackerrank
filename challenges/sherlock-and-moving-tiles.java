import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double l = sc.nextDouble();
        double s1 = sc.nextDouble();
        double s2 = sc.nextDouble();

        int t = sc.nextInt();

        for (int i=0; i<t; i++) {
            double q = sc.nextDouble();
            double a = Math.abs((Math.sqrt(q) - l) / ((s1-s2) / Math.sqrt(2)));
            System.out.println(a);
        }

        sc.close();
    }
}
