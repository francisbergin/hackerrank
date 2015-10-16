import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        boolean equal = true;

        for (int i=0; i<s.length()/2; i++) {
            if (s.charAt(i) != s.charAt(s.length()-i-1)) {
                equal = false;
                break;
            }
        }

        if (equal == true)
            System.out.println("Yes");
        else
            System.out.println("No");

        sc.close();
    }
}
