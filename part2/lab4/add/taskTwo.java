package part2.lab4.add;

import java.util.Scanner;

public class taskTwo {
    public static void main(String[] args){
        int a, b;
        double res;
        System.out.println("Enter a, b");
        Scanner scan = new Scanner(System.in);
        a = scan.nextInt();
        b = scan.nextInt();
        scan.close();
        if(a>=0 && b>=0){
            res = Math.sqrt(a*b);
            System.out.println("Result = " + res);
        }else{
            System.out.println("Wrong data");
        }
    }
    
}
