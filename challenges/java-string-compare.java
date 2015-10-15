import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        int k = sc.nextInt();

        String smallest = new String(new char[k]).replace('\0', 'z');
        String biggest = new String(new char[k]).replace('\0', 'A');

        for (int i=0; i<s.length()-k+1; i++) {
            if (s.substring(i, i+k).compareTo(smallest) < 0)
                smallest = s.substring(i, i+k);
            if (s.substring(i, i+k).compareTo(biggest) > 0)
                biggest = s.substring(i, i+k);
        }

        System.out.println(smallest);
        System.out.println(biggest);

        sc.close();
    }
}
