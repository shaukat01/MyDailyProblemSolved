
// public class tryCatch {
//     public static void main(String args[]){
//         int a=6;
//         int b=0;
//         int c=a/b;
//         System.out.println(c);  //from here to end of main nothing will print due to exception handling
//         System.out.println("Main is terminated: ");
//     }
// }


//handling the above exception...Example 1
// public class tryCatch {
//     public static void main(String args[]){
//         int a=6;
//         int b=0;
//         try{
//             int c=a/b;
//             System.out.println(c); //this line will not execute but once after come out from try block the rest line will execute s
//         }
//         // System.out.println("hello:"); //gives error just after try we have to write catch block
//         catch(Exception e) //Exception will handle any types of error
//         {
//         System.out.println("Can't divide by zero: ");
//         }
//         System.out.println("Main is terminated: ");//after using try and catch we can print this line
//     }
// }



//Example 2
// public class tryCatch{
//       public static void main(String args[]){
//        String str=null;//in java we can write null with all small letter 
//        System.out.println(str);
//        System.out.println(str.toUpperCase());//it will give error

//       }
// }

// handling the above exception...
// public class tryCatch{
//     public static void main(String args[]){
//      String str=null;//in java we can write null with all small letter 
//      try{
//      System.out.println(str.toUpperCase());//it will give error
//      }
//      catch(Exception e){
//         System.out.println("Null can't be casted: "); 
//      }
//     }
// }

       

//Example 3
// public class tryCatch{
//       public static void main(String args[]){
//        String str="abc";
//        int a=Integer.parseInt(str);//it is used to convert from string to decimal
//        System.out.println(a);//here will give error  
//        System.out.println("here main will end: ");//it will not execute and throw exception
//       }
// }


//handling the exception
public class tryCatch{
    public static void main(String args[]){
     String str="abc";
     try{
     int a=Integer.parseInt(str);//it is used to convert from string to decimal
     System.out.println(a); //it will  not execute beacuse above line is giving error
     }
     catch(Exception e)
     {
   System.out.println("abc is string and we cant convert from string to integer: ");
     }
     System.out.println("here main will end: "); //here it will execute
     
    }
}