package part2.lab4.add;

import java.util.Scanner;

public class taskSeven {
    public static int mult(int n){
        int  mult = 1;
        for(int i = n; i != 0; i /= 10){ 
            if((i % 10 != 0) && ((i % 10) % 2 == 0))
                mult *= (i % 10); 
        }
        return mult;        
    }
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        if(n > 0){
            System.out.println("Mult = " + mult(n));
        }else
            System.out.println("err n <= 0");
    }
}
