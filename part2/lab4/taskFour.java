package part2.lab4;

import static part2.lab4.taskFourFolder.taskFourFunc.intToBoolFunc;
import static part2.lab4.taskFourFolder.taskFourFunc.boolToIntFunc;

public class taskFour {
        public static void main(String[] args){
            boolean xBool = false;
            int yBool = boolToIntFunc(xBool);
            int xInt = 0;
            boolean yInt = intToBoolFunc(xInt);
            System.out.println(xInt + " -> " + yInt);
            System.out.println(xBool + " -> " + yBool);
            xBool = true;
            yBool = boolToIntFunc(xBool);
            xInt = 1;
            yInt = intToBoolFunc(xInt);
            System.out.println(xInt + " -> " + yInt);
            System.out.println(xBool + " -> " + yBool);
    }    
}
