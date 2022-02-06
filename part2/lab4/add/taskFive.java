package part2.lab4.add;

import java.util.Scanner;

public class taskFive {
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt(), sum = 0;
        for(int i = n; i != 0; i /= 10){ 
            sum += (i % 10) * (i % 10); 
        } 
        scan.close();
        System.out.println("Sum = " + sum);
    }
}
