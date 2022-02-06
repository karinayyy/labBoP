package part2.lab4.add;

import java.util.Scanner;

public class taskOne {
    public static double mult(int a, int b){
        return (Math.pow(a, 2) + Math.pow(b, 2))/2;
    }
    public static void main(String[] args){
        int a, b;
        System.out.println("Enter a, b");
        Scanner scan = new Scanner(System.in);
        a = scan.nextInt();
        b = scan.nextInt();
        scan.close();
        System.out.println("Result = " + mult(a, b));
    }    
}
