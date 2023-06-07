import java.util.*;

public class Arrays {
    public static void main(String[] args) {
        // int [] marks={3,4,5,6}; //this is also correct
        // System.out.println(marks[2]);
        // marks[2]=9;
        // System.out.println(marks[2]);

        int marks[]={3,4,5,6}; //this is also correct
        // System.out.println(marks[2]);
        // marks[2]=9;
        // System.out.println(marks[2]);

        // // for each loop
        for(int x:marks){
        System.out.println(x);
        }

        // multiDiminesional Array
        //
        // int [][] array={{1,2,3},{4,5,6},{6,8,7}};
        // int array[][]={{1,2,3},{4,5,6},{6,8,7}};
        // System.out.println(array[1][2]);

        // String Array
        // String cars[]={"Maruti Suzuki","Maruti","Suzuki","Innova"};
        // for(String x:cars){
        // System.out.println(x);
        // }

        int arr[] = { 2, 3, 4, 5, 6, };
        // Exception Handling
        try {
            System.out.println(arr[8]);   //error waali sab cheez isme leekhte hai
        } catch (Exception e) {
            System.out.println("Maasoom");  // if error aa gyaa tu ab kya karna hai isme lekhte hai
        }
        System.out.println("this will execute without effect of upper");
    }
}
