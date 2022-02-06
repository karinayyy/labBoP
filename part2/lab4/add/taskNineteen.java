package part2.lab4.add;

import java.util.Scanner;

public class taskNineteen {
    public static int sum(int n){
        int res = 1;
        if(n == 1 || n == 0)
            return res;
        res += Math.pow(n,2)*sum(n - 1);
        return res;
    }
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        System.out.println("Sum = " + sum(n));
    }
}
