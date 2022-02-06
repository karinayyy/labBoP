package part2.lab4.add;

import java.util.Scanner;

public class taskEighteen {
    public static double sin(int n){
        double sum = 0;
        for(int i = 0; i <= n; i++)
            sum += Math.sin(i);
        return sum;
    }
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        System.out.println("Sum = " + sin(n));
        
    }
}
