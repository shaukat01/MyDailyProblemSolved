import java.util.Scanner;
public class UserInput { 
    public static void main(String[] args){
   Scanner s=new Scanner(System.in);
   System.out.println("Enter the Number:");
   int x=s.nextInt();  //for integer
   System.out.println("The number is:"+x);
   Scanner s2=new Scanner(System.in);
      String input = s2.nextLine();  //for string
   System.out.println("The number is:"+input);
    }
}








