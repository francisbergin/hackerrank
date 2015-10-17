import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine().trim();

        if (s.equals("")) {
            System.out.println(0);
        } else {
            String[] t = s.split("[\\s!,?._'@]+");

            System.out.println(t.length);

            for (int i=0; i<t.length; i++) {
                System.out.println(t[i]);
            }
        }

        sc.close();
    }
}
