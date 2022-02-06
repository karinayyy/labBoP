package part2.lab4.add;

import java.util.Scanner;

public class taskThirteen {
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt(), res = 1;
        scan.close();
        if(n > 0){
            for(int i = 1; i <= n; i++){
                if(i % 2 != 0)
                    res *= i;
            }
            System.out.println("res = " + res);
        }else   
            System.out.println("n <= 0 err");
    }
}
