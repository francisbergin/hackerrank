import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        List<List<Integer>> al = new ArrayList<List<Integer>>();

        for (int r=0; r<n; r++) {
            int d = sc.nextInt();
            al.add(new ArrayList<Integer>());

            for (int c=0; c<d; c++) {
                al.get(r).add(sc.nextInt());
            }
        }

        int q = sc.nextInt();

        for (int i=0; i<q; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();

            if (x <= al.size() && y <= al.get(x-1).size())
                System.out.println(al.get(x-1).get(y-1));
            else
                System.out.println("ERROR!");
        }

        sc.close();
    }
}
