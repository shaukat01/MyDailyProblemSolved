import java.util.*;

public class Ques_8{
     public static void main(String[] args){
     
        //Arithmetic exception
     try{
      int a=3/0;
      System.out.println(a);
     }  
     catch(ArithmeticException e){
     System.out.println(e);
     } 

     //Null pointer Exception
   try{
     String str=null;
     System.out.println(str.length());
   }
   catch(NullPointerException e){
     System.out.println(e);
   }
   
    //ArrayIndexOutOfBoundException
    try{
      //always make dynamic array
      int a[]=new int[3];
      System.out.println(a[6]);
    }
    catch(ArrayIndexOutOfBoundsException e){
        System.out.println(e);
    }

     //StringIndexOutOfBoundException
     try{
          String s="shaukat";
          System.out.println(s.charAt(25));
          
     }
     catch(StringIndexOutOfBoundsException e){
     System.out.println(e);
    }

    //NumberFormatExeption
    try{
     String str="shaukat";
     int n=Integer.parseInt(str);

    }
    catch(NumberFormatException e){
     System.out.println(e);
    }
}
}
