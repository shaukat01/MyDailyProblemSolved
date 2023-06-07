import java.util.Scanner;
public class Switch {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the age: ");
        int age=s.nextInt();

        switch(age){
            case 12:
            System.out.println("Age is 12:");
            break;
            case 26:
            System.out.println("Age is 26:");
            break;
            case 47:
            System.out.println("Age is 47: ");
            break;
            default:
            System.out.println("Default age is print");
        }

    }
}
