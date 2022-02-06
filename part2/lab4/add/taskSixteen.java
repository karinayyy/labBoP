package part2.lab4.add;

import java.util.Scanner;

public class taskSixteen {
    public static double sin(int n){
        return Math.sin(n);
    }
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        System.out.println("Sin(" + n + ") = " + sin(n));
        
    }
}
