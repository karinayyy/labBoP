package part2.lab4.add;

import java.util.Scanner;

public class taskTen {
    public static void main(String[] args){
        System.out.println("Enter num");
        Scanner scan = new Scanner(System.in);
        double num = scan.nextInt();
        scan.close();
        if(num >= 0){
            if(Math.sqrt(num) % 1 == 0)
                System.out.println("yes");
            else
                System.out.println("no");
        }else
            System.out.println("err n<0");
            
    }    
}
