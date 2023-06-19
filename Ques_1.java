import java.util.*;


public class Ques_1 {
    public static void main(String[] args){
     Scanner sc =new Scanner(System.in);
     System.out.println("Enetr the name,id,salary of employee seperated by whitespace: ");

     String s=sc.nextLine();
     StringTokenizer st= new StringTokenizer(s," ");

     String s1=st.nextToken();
     String s2=st.nextToken();
     String s3=st.nextToken();

     int id=Integer.parseInt(s2);
     double salary=Double.parseDouble(s3);

     System.out.println("Name is: "+s1+" Id is: "+ id + " Salary is: "+salary);
    }  
} 

