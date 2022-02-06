package part2.lab4.add;

import java.util.Scanner;

public class taskNine {
    public static int isSimple(int n){
        for(int i = 2; i < n; i++){
            if(n % i == 0)
                return 0;
        }
       return 1;
        
    }
    public static void main(String[] args){
        System.out.println("Enter number");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        if(n > 1){
            if(isSimple(n) == 0)
                System.out.println("no");
            else
                System.out.println("err n <= 0");

        }else if (n == 1)   
            System.out.println("no");
        else
            System.out.println("err n <= 0");
    }
}
