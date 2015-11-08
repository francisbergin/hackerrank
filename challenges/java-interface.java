import java.util.Scanner;

interface AdvancedArithmetic {
    public abstract int divisorSum(int n);
}

class MyCalculator implements AdvancedArithmetic {
    public int divisorSum(int n) {
        int sum = n;
        for (int i=1; i<n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        return sum;
    }
}

class Solution {

    public static void main(String []argh) {
        Scanner sc = new Scanner(System.in);

        MyCalculator myCalculator = new MyCalculator();

        System.out.print("I implemented: ");

        ImplementedInterfaceNames(myCalculator);

        int n = sc.nextInt();

        System.out.print(myCalculator.divisorSum(n));
        System.out.println();

        sc.close();
    }

    static void ImplementedInterfaceNames(Object o) {
        Class[] theInterfaces = o.getClass().getInterfaces();

        for (int i = 0; i < theInterfaces.length; i++) {
            String interfaceName = theInterfaces[i].getName();
            System.out.println(interfaceName);
        }
    }

}
