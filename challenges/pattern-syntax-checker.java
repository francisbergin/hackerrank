import java.util.regex.Pattern;
import java.util.regex.PatternSyntaxException;
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine();

        for (int i=0; i<n; i++) {
            String s = sc.nextLine();

            try {
                Pattern p = Pattern.compile(s);
                System.out.println("Valid");
            } catch (PatternSyntaxException e) {
                System.out.println("Invalid");
            }
        }

        sc.close();
    }
}
