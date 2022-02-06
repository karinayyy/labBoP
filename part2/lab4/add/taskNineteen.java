package part2.lab4.add;

import java.util.Scanner;

public class taskNineteen {
    public static int sum(int n){
        int res = 1;
        if(n == 0)
            return 0;
        else if(n == 1)
            return 1;
        if(n > 0)
            res += Math.pow(n,2)*sum(n - 1);
        else if (n < 0)
            res += 1 / Math.pow(n, 2) * sum(-n);
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
