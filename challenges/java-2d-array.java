import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[][] a = new int[6][6];

        for (int r=0; r<6; r++) {
            for (int c=0; c<6; c++) {
                a[r][c] = sc.nextInt();
            }
        }

        Integer biggestSum = null;

        for (int r=0; r<4; r++) {
            for (int c=0; c<4; c++) {
                int sum = 0;

                sum += a[r][c] + a[r][c+1] + a[r][c+2];
                sum += a[r+1][c+1];
                sum += a[r+2][c] + a[r+2][c+1] + a[r+2][c+2];

                if (biggestSum == null)
                    biggestSum = sum;
                else if (sum > biggestSum)
                    biggestSum = sum;
            }
        }

        System.out.println(biggestSum);

        sc.close();
    }
}
