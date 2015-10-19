import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int a[] = new int[n];

        for (int i=0; i<n; i++) {
            a[i] = sc.nextInt();
        }

        int ans = 0;

        for (int i1=0; i1<n; i1++) {
            int sum = a[i1];

            if (sum < 0)
                ans++;

            for (int i2=i1+1; i2<n; i2++) {
                sum += a[i2];

                if (sum < 0)
                    ans++;
            }
        }

        System.out.println(ans);

        sc.close();
    }
}
