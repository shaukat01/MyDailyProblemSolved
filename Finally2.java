
class Finally2{ 

    // In this we are not handling the exception in catch block  which is thrown by try block  
  public static void main(String args[]){
     
    try{
    System.out.println("This is try block: ");
    int a=20;
    int b=0;
    int c=a/b;
    System.out.println(c); //this will not exceute
    System.out.println("This is also try block: ");
    }

    catch(NullPointerException e){  //Exception is not handle by catch block because try block throwing the error of arithmetic type but we are catching the error of NullPounterException 
  System.out.println("This is catch block an it will handle exception which is thrown by try block:");
    }

    finally{
    System.out.println("This is finally block and it will exceute always whether the exception will occur or not: ");
    }
    System.out.println("this is main block which is always execute but either try or catch either will: ");//in this exapmle it will not execute becuse we are not not handling the exception 
  }
} 