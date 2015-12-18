import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String ms = sc.next();
        String cs = "";

        for (char c: ms.toCharArray()) {
            cs += (char)(((c-'0'+1)%10)+'0');
        }

        System.out.println(cs);

        sc.close();
    }
}
