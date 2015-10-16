import java.util.Arrays;
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s1 = sc.next().toLowerCase();
        String s2 = sc.next().toLowerCase();

        char[] ca1 = s1.toCharArray();
        char[] ca2 = s2.toCharArray();

        Arrays.sort(ca1);
        Arrays.sort(ca2);

        s1 = new String(ca1);
        s2 = new String(ca2);

        if (s1.equals(s2))
            System.out.println("Anagrams");
        else
            System.out.println("Not Anagrams");

        sc.close();
    }
}
