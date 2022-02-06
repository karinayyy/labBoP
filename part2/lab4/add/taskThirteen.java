package part2.lab4.add;

import java.util.Scanner;

public class taskThirteen {
    public static int mult(int n){
        int res = 1;
        for(int i = 1; i <= n; i++){
            if(i % 2 != 0)
                res *= i;
        }
        return res;
    }
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        if(n > 0){
            System.out.println("res = " + mult(n));
        }else   
            System.out.println("n <= 0 err");
    }
}
