import java.util.*;
import java.io.*;

class Student{
    String usn;
    String name;
    String branch;
    String phone;

    public Student(String usn,String name,String branch,String phone){
      this.usn=usn;
      this.name=name;
      this.branch=branch;
      this.phone=phone;
    }

    public void printDetails(){
        System.out.println(usn);
        System.out.println(name);
        System.out.println(branch);
        System.out.println(phone);
    }
}

public class Ques_2{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Number of student: ");

        int n=sc.nextInt();
        sc.nextLine();
        Student s[]=new Student[n];

        for(int i=0;i<n;i++){
            System.out.println("The Details of Student are: "+(i+1));
            System.out.println("Enter the usn:");
            String usn=sc.nextLine();
            System.out.println("Enter the name:");
            String name=sc.nextLine();
            System.out.println("Enter the branch:");
            String branch=sc.nextLine();
            System.out.println("Enter the ph:");
            String phone=sc.nextLine();
            s[i]=new Student(usn,name,branch,phone);
        }

        for(int i=0;i<n;i++){
            System.out.println("The Details are:"+(i+1));
            s[i].printDetails();
        }

          sc.close();

    }
}