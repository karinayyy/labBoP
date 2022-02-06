package part2.lab4.add;

import java.util.Scanner;

public class taskTwelve {
        public static void main(String[] args){
            System.out.println("Enter num and pow");
            Scanner scan = new Scanner(System.in);
            double num = scan.nextDouble();
            int pow = scan.nextInt();
            scan.close();
            System.out.println(num + "^" + pow + " = " + Math.pow(num, pow));
        }
}
