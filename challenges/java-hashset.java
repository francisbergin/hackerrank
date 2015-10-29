import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine();
        Set<String> set = new HashSet<String>();

        for (int i=0; i<t; i++) {
            String s = sc.nextLine();
            set.add(s);
            System.out.println(set.size());
        }

        sc.close();
    }
}
