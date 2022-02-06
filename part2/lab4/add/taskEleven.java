package part2.lab4.add;

import java.util.Scanner;

public class taskEleven {
    public static int gcd(int a, int b){
        if(b == 0)
            return a;
        else
            return gcd(b,a%b);
    }
    public static int lcm(int a, int b){
        return a*b/gcd(a, b);
    }
    public static void main(String[] args){
        System.out.println("Enter numbers");
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        scan.close();
        System.out.println("res " + lcm(a,b));
    }
    
}
