import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String sA = sc.next();
        String sB = sc.next();

        System.out.println(sA.length()+sB.length());

        if (sA.compareTo(sB) > 0)
            System.out.println("Yes");
        else
            System.out.println("No");

        System.out.printf("%s%s ", sA.substring(0, 1).toUpperCase(), sA.substring(1));
        System.out.printf("%s%s\n", sB.substring(0, 1).toUpperCase(), sB.substring(1));

        sc.close();
    }
}
