package part2.lab4;

import java.util.Scanner;

public class taskThree {

    public static void main(String[] args){
        int n;
        double x;
        System.out.println("Enter n, x (n>1)");
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        x = scan.nextDouble();
        scan.close();
        if(n > 1){
            double y = 1;
            for(int i = 1; i <= (n - 1); i++){
                double y1 = 0;
                for(int j = 0; j <= n; j++){
                    if(i == j + x)
                        continue;
                    if(j + x == 0)
                        break;
                    y1 += i / (j + x);
                }
                y *= y1;
            }
            System.out.println("y = " + y);
        }else
            System.out.println("Wrong n");
    }    
}
