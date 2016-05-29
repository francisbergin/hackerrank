import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int K = sc.nextInt();
        Map<Integer, Integer> map = new HashMap<>();

        for (int i=0; i<N; i++) {
            int tmp = sc.nextInt();
            while (map.containsKey(tmp)) {
                tmp = map.get(tmp);
            }
            if (tmp != N-i && K != 0) {
                System.out.printf("%d ", N-i);
                map.put(N-i, tmp);
                K--;
            } else {
                System.out.printf("%d ", tmp);
            }
        }

        sc.close();
    }
}
