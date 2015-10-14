import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int cnt = 1;

        while (sc.hasNext()) {
            String line = sc.nextLine();
            System.out.printf("%d %s\n", cnt, line);
            cnt++;
        }

        sc.close();
    }
}
