package part2.lab4.add;

import java.util.Scanner;

public class taskTwenty {
    public static double sum(int n){
        double res = 1;
        if(n == 1)
            return res;
        res *= Math.sin(n)*sum(n - 1);
        return res;
    }
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        if(n > 0)
            System.out.println("Sum = " + sum(n));
        else
            System.out.println("err n <= 0");
    }    
}
