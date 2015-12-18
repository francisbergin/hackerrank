import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String ms = sc.next();
        int e = sc.nextInt();
        String cs = "";

        for (char c: ms.toCharArray()) {
            cs += (char)(((c-'0'+e)%10)+'0');
        }

        System.out.println(cs);

        sc.close();
    }
}
