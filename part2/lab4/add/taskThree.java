package part2.lab4.add;

import java.util.Scanner;

public class taskThree {
    public static void main(String[] args){
        int[] arr;
        int size, res = 1;
        System.out.println("Enter quant of num");
        Scanner scan = new Scanner(System.in);
        size = scan.nextInt();
        arr = new int[size];
        System.out.println("Enter number");
        for(int i = 0; i < size; i++){
            arr[i] = scan.nextInt();
            if(arr[i] != 0)
                res*=arr[i];
        }
        scan.close();
        System.out.println("Mult = " + res);
    }
}
