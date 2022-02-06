package part2.lab4.add;

import java.util.Scanner;

public class taskSeventeen {
    public static double cos(int n){
        return Math.cos(n);
    }
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        System.out.println("Cos(" + n + ") = " + cos(n));
        
    }
}
