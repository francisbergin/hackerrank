import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i=0; i<t; i++) {
            int pX = sc.nextInt();
            int pY = sc.nextInt();
            int qX = sc.nextInt();
            int qY = sc.nextInt();

            System.out.printf("%d %d\n", 2*qX - pX, 2*qY - pY);
        }

        sc.close();
    }
}
