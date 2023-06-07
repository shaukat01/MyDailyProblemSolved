// public class Finally{ 

//     // Example with No exception 
//   public static void main(String args[]){
     
//     try{
//     System.out.println("This is try block: ");
//     int a=20;
//     int b=23;
//     int c=a/b;
//     System.out.println(c);
//     System.out.println("This is also try block: ");
//     }

//     catch(Exception e){  //this will not exceute
//   System.out.println("This is catch block an it will handle exception which is thrown by try block:");
//     }

//     finally{
//     System.out.println("This is finally block and it will exceute always whether the exception will occur or not: ");
//     }
//     System.out.println("This is main block which is always execute: ");
//   }
// } 



class Finally{ 

    // Example with exception 
  public static void main(String args[]){
     
    try{
    System.out.println("This is try block: ");
    int a=20;
    int b=0;
    int c=a/b;
    System.out.println(c); //this will not exceute
    System.out.println("This is also try block: ");
    }

    catch(Exception e){
  System.out.println("This is catch block an it will handle exception which is thrown by try block:");
    }

    finally{
    System.out.println("This is finally block and it will exceute always whether the exception will occur or not: ");
    }
    System.out.println("this is main block which is always execute: ");
  }
} 