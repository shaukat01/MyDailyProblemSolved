package pck1.pck2.pck3;
import pck1.pck2.*;
import java.util.*; 


public class Calculator {
     public void Cal(){
        System.out.println("Enter the two numbers: ");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        pck1.Add obj1=new pck1.Add();
        Sub obj2=new Sub();

        System.out.println("enter your choice: 1)Add 2)Sub");
        int ch=sc.nextInt();
        if(ch==1){
        System.out.println( obj1.addition(a, b));
        }
        else{
        System.out.println(obj2.subtract(a, b));
        }
     }
}
