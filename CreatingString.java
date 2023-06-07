import java.lang.String;

public class CreatingString {
    public static void main(String[] args){
    String s="Hello";
    String s1=new String("Shaukat");
    System.out.println(s1);
    System.out.println(s);

    s.concat("Easy Classes: ");
    System.out.println(s);
    // String s2=s.concat("Easy Classes: ");
    System.out.println(s.concat("Easy Classes: "));
}
}
