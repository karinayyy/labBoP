package part2.lab4.add;

import java.util.Scanner;

public class taskTwo {
    public static double sqrt(int a, int b){
        return Math.sqrt(a*b);
    }
    public static void main(String[] args){
        int a, b;
        System.out.println("Enter a, b");
        Scanner scan = new Scanner(System.in);
        a = scan.nextInt();
        b = scan.nextInt();
        scan.close();
        if(a>=0 && b>=0){
            System.out.println("Result = " + sqrt(a, b));
        }else{
            System.out.println("Wrong data");
        }
    }
    
}
