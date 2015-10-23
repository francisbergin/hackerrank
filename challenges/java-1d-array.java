import java.util.HashSet;
import java.util.Iterator;
import java.util.Scanner;
import java.util.Set;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i1=0; i1<t; i1++) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            
            int[] a = new int[n];
            
            for (int i2=0; i2<n; i2++) {
                a[i2] = sc.nextInt();
            }

            Set<Integer> todo = new HashSet<Integer>();
            Set<Integer> done = new HashSet<Integer>();
            todo.add(0);

            boolean won = false;
            Iterator iterator = todo.iterator();

            while (iterator.hasNext() && won == false) {
                int next = (int) iterator.next();
                
                if (next != 0 && a[next-1] == 0 && !todo.contains(next-1) && !done.contains(next-1))
                    todo.add(next-1);

                if (next+1 < n && a[next+1] == 0 && !todo.contains(next+1) && !done.contains(next+1))
                    todo.add(next+1);

                if (next+m < n && a[next+m] == 0 && !todo.contains(next+m) && !done.contains(next+m))
                    todo.add(next+m);

                todo.remove(next);
                done.add(next);

                if (next+1 >= n || next+m >= n)
                    won = true;

                iterator = todo.iterator();
            }

            if (won)
                System.out.println("YES");
            else
                System.out.println("NO");

        }

        sc.close();
    }
}

