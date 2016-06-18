import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] a = new int[5_000_001];
        int[] m = new int[5_000_001];

        int t = sc.nextInt();
        while (t-- != 0) {
            int n = sc.nextInt();
            if (m[n] != 0) {
                System.out.println(m[n]);
                continue;
            }
            int max_value = 0;
            int max_index = 0;
            for (int i=1; i<=n; i++) {
                if (a[i] == 0) {
                    long value = i;
                    int count = 1;
                    while (value != 1) {
                        if (value % 2 == 0) {
                            value /= 2;
                        } else {
                            value = 3*value + 1;
                        }
                        if (value < 5_000_000 && a[(int)value] != 0) {
                            count += a[(int)value];
                            break;
                        }
                        count++;
                    }
                    a[i] = count;
                }
                if (a[i] >= max_value) {
                    max_value = a[i];
                    max_index = i;
                }
                m[i] = max_index;
            }
            System.out.println(max_index);
        }

        sc.close();
    }
}
