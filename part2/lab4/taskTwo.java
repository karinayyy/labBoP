package part2.lab4;

import java.util.Scanner;

public class taskTwo {

    public static void powNum(int n, final int num){
        long res = 1;
        for(int i = 0; i <= n; i++){
            if(i > 0)
                res *= num;
            System.out.println("8^ " + i + " = " + res);
        }
    }
    
    public static void powBin(int n, final int num){
        long res = 0;
        int powCount = 0;
        for(int i = 0; i < 33; i+=3){
            if(i > 0)
                res = 1 << i;
            System.out.println("8^ " + powCount++ + " = " + res);
        }
    }

    public static void main(String[] args){
        int n;
        final int num = 8;
        System.out.println("Enter n (0 - 10)");
        Scanner nScan = new Scanner(System.in);
        n = nScan.nextInt();
        if(n >= 0 && n <= 10){
            int chosen;
            System.out.println("Choose func: 1 - arith, 2 - bin");
            chosen = nScan.nextInt();
            if(chosen == 1)
                powNum(n, num);
            else
                powBin(n, num);
        }else
            System.out.println("Wrong n");
        nScan.close();

    }
}
