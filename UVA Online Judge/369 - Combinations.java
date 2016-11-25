

import java.util.Scanner;
import java.math.BigInteger;


class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        while (true){

            int a = sc.nextInt();
            int b = sc.nextInt();

            if(a==0 && b==0)
                break;

            int c = a - b;


            BigInteger x = new BigInteger ("1");

            for (int i=1;i<=a;i++) {
                x = x.multiply( new BigInteger (i+""));

            }
         //   System.out.println(x);

            BigInteger y = new BigInteger ("1");

            for (int i=1;i<=b;i++) {
                y = y.multiply( new BigInteger(i+""));
            }
         //   System.out.println(y);

            BigInteger z = new BigInteger ("1");

            for (int i=1;i<=c;i++) {

                z= z.multiply( new BigInteger(i+""));
            }
           // System.out.println(z);

           if(y!=new BigInteger("0"));
            x = x.divide(y);
           if(z!=new BigInteger("0"))
            x = x.divide(z);

            System.out.println(a +" things taken "+ b + " at a time is " + x + " exactly.");

        }
    }

}
