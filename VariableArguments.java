import java.util.*;
public class VariableArguments {
    static int sum(int ...arr){
        //it behaves as an array
     int result=0;
     for(int value:arr){
        result+=value;
     }
     return result;
    }
    public static void main(String[] args){
        System.out.println();
        System.out.println(sum(3));
        System.out.println(sum(5,6));
        System.out.println(sum(2,5,4,7));
    }
}


