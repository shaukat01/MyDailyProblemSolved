import java.lang.String;

public class Comparison {
    public static void main(String[] args){
   String s1="EEC";
   String s2="Classes";
//    System.out.println(s1.equals(s2)); //checking the content of string

   String s3="shaukat";
   String s4="SHAUKAT";
    String s6="shaukat";
//    System.out.println(s3.equals(s4)); //it checks the content as well as case also
   String s5=new String("shaukat");
//    System.out.println(s3.equals(s5));
//    System.out.println(s4.equals(s5));
   System.out.println(s3==s5);
    System.out.println(s3==s6);  //it checks the reference of the strings
    System.out.println(s3.equals(s6));
    System.out.println(s3.equals(s5));
    System.out.println(s3.compareTo(s4)); //it will give either positive or negative value depending upon the s3-s4 or s4-s3
//    System.out.println(s3.compareTo(s6));
//    System.out.println(s3.compareTo(s5));

   //below is not compare function
   // System.out.println(s3.equalsIgnoreCase(s4));// it checks the content not the case 

    }
}


