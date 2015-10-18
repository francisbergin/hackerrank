import java.math.BigDecimal;
import java.util.Scanner;

class Solution {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        String[] s = new String[n];

        for (int i=0; i<n; i++) {
            s[i] = sc.next();
        }

        sc.close();

        for (int i=1; i<n; i++) {
            int j = i;

            BigDecimal bd1 = new BigDecimal(s[j-1]);
            BigDecimal bd2 = new BigDecimal(s[j]);

            while (j > 0 && bd2.compareTo(bd1) > 0) {
                String tmp = s[j-1];
                s[j-1] = s[j];
                s[j] = tmp;

                j -= 1;
                if (j != 0)
                    bd1 = new BigDecimal(s[j-1]);
            }
        }

        for (int i=0; i<n; i++) {
            System.out.println(s[i]);
        }
    }
}
