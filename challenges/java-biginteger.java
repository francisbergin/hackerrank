import java.math.BigInteger;
import java.util.Scanner;

class JavaBiginteger {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        BigInteger bi1 = sc.nextBigInteger();
        BigInteger bi2 = sc.nextBigInteger();

        System.out.println(bi1.add(bi2));
        System.out.println(bi1.multiply(bi2));

        sc.close();
    }
}
