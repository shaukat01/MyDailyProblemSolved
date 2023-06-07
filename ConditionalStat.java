import java.util.Scanner;
public class ConditionalStat {
    public static void main(String[] args){
   Scanner s=new Scanner(System.in);
   System.out.println("Enter the age");
   int age=s.nextInt();


   if(age>12){
    System.out.println("You are not a child");
   }
   else{
    System.out.println("You are a kid");
   }
    }
}



