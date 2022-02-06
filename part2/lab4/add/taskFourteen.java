package part2.lab4.add;

import java.util.Scanner;

public class taskFourteen {
    public static int sum(int m, int n){
        int res = 1;
        for(int i = n; i > m; i--)
            res*=i;
        return res;
    }
    public static void main(String[] args){
        System.out.println("Enter number m < n");
        Scanner scan = new Scanner(System.in);
        int m = scan.nextInt();
        int n = scan.nextInt();
        scan.close();
        if(m < n){
            System.out.println("res " + sum(m, n));
        }else
            System.out.println("err m>=n");
    }
}
