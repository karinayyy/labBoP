package part2.lab4;

import java.util.Scanner;

public class taskOne {

    public static double yFunc(double x){
        final int n = 6;
        double y;
        if(x < 5){
            y = 1;
            for(int k = 1; k <= n; k++)
                y *= Math.pow(Math.cos(x - 5), k) + 1;
            y+=2;
        }else
            y = Math.pow((x - 4), 1/5) + x + 60;
        return y;
    }

    public static void main(String[] args) {
        double a, b, step;
        System.out.println("Enter a, b, step (a <= b; step > 0)");
        Scanner scan = new Scanner(System.in);
        a = scan.nextDouble();
        b = scan.nextDouble();
        step = scan.nextDouble();
        scan.close();
        if(a <= b && step > 0){
            for(double x = a; x <= b; x+=step)
                System.out.println("x = " + x + " y = " + yFunc(x));
        }else
            System.out.println("Wrong data");
    }
}