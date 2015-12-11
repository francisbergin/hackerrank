import java.util.Random;
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i=0; i<t; i++) {
            long seedMin = sc.nextLong();
            long seedMax = sc.nextLong();
            int[] randomValues = new int[10];

            for (int j=0; j<10; j++) {
                randomValues[j] = sc.nextInt();
            }

            Random rand = new Random();
            long seed;
            boolean gotIt = false;

            for (seed=seedMin; seed<=seedMax; seed++) {
                rand = new Random(seed);

                for (int j=0; j<10; j++) {
                    if (randomValues[j] == rand.nextInt(1000)) {
                        gotIt = true;
                    } else {
                        gotIt = false;
                        break;
                    }
                }

                if (gotIt == true) {
                    break;
                }
            }

            System.out.printf("%d ", seed);
            for (int j=0; j<9; j++) {
                System.out.printf("%d ", rand.nextInt(1000));
            }
            System.out.println(rand.nextInt(1000));
        }

        sc.close();
    }
}
