package part2.lab4.add;

import java.util.Scanner;

public class taskFourteen {
    public static void main(String[] args){
        System.out.println("Enter number m < n");
        Scanner scan = new Scanner(System.in);
        int m = scan.nextInt();
        int n = scan.nextInt();
        int res = 1;
        scan.close();
        if(m < n){
            for(int i = n; i > m; i--)
                res*=i;
            System.out.println("res " + res);
        }else
            System.out.println("err m>=n");
    }
}
