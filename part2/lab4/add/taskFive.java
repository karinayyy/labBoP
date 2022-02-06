package part2.lab4.add;

import java.util.Scanner;

public class taskFive {
    public static int sum(int n){
        int sum = 0;
        for(int i = n; i != 0; i /= 10) 
            sum += (i % 10) * (i % 10);
        return sum;
    }
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        if(n > 0){
            System.out.println("Sum = " + sum(n));
        }else
            System.out.println("err n <= 0");
    }
}
