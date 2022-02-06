package part2.lab4.add;

import java.util.Scanner;

public class taskSix {
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt(), sum = 0;
        scan.close();
        if(n > 0){
            for(int i = n; i != 0; i /= 10){ 
                if(i % 2 != 0)
                    sum += (i % 10); 
            } 
            System.out.println("Sum = " + sum);
        }else
            System.out.println("err n <= 0");
    }
}
