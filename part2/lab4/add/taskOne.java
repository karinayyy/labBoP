package part2.lab4.add;

import java.util.Scanner;

public class taskOne {

    public static void main(String[] args){
        int a, b;
        double res;
        System.out.println("Enter a, b");
        Scanner scan = new Scanner(System.in);
        a = scan.nextInt();
        b = scan.nextInt();
        scan.close();
        res = (Math.pow(a, 2) + Math.pow(b, 2))/2;
        System.out.println("Result = " + res);
    }    
}
