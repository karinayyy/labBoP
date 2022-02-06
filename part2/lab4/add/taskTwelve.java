package part2.lab4.add;

import java.util.Scanner;

public class taskTwelve {
    public static double power(double num, int pow){
        return Math.pow(num, pow);
    }
    public static void main(String[] args){
        System.out.println("Enter num and pow");
        Scanner scan = new Scanner(System.in);
        double num = scan.nextDouble();
        int pow = scan.nextInt();
        scan.close();
        System.out.println(num + "^" + pow + " = " + power(num, pow));
    }
}
