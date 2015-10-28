import java.util.Scanner;
import java.util.Stack;

class Solution {
    public static boolean isBalanced(String s) {
        Stack<Character> stack = new Stack<Character>();

        for (int i=0; i<s.length(); i++) {
            char c = s.charAt(i);

            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
                continue;
            }

            if (c == ')' || c == '}' || c == ']') {
                if (stack.empty())
                    return false;

                char p = (char) stack.pop();

                if (c == ')' && p != '(')
                    return false;
                else if (c == '}' && p != '{')
                    return false;
                else if (c == ']' && p != '[')
                    return false;
            }
        }

        if (!stack.empty())
            return false;
        else
            return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            String s = sc.next();
            System.out.println(isBalanced(s));
        }

        sc.close();
    }
}
