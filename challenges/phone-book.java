import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        Map m = new HashMap();

        sc.nextLine();

        for (int i=0; i<n; i++) {
            String name = sc.nextLine();
            String number = sc.nextLine();
            m.put(name, number);
        }

        while (sc.hasNextLine()) {
            String s = sc.nextLine();
            if (m.containsKey(s))
                System.out.println(s + "=" + m.get(s));
            else
                System.out.println("Not found");
        }

        sc.close();
    }
}
