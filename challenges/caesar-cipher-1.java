import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String s = sc.next();
        int k = sc.nextInt();

        for (char c : s.toCharArray()) {
            if (Character.isLetter(c)) {
                if (Character.isLowerCase(c)) {
                    c = (char) (((c + k - 'a') % 26) + 'a');
                } else {
                    c = (char) (((c + k - 'A') % 26) + 'A');
                }
            }

            System.out.print(c);
        }

        System.out.println();

        sc.close();
    }
}
