import java.util.*;

class Employee{
  int salary;
  String name;
  public int getSalary(){
    return salary;
  }
  public String getName(){
    return name;
  }
 public void SetName(String n){
  name=n;
 }
}


public class QuesOnObjectClass { 
    public static void main(String[] args){
   
        Employee harry=new Employee();
        harry.SetName("codewithharry");
        harry.salary=231;
        System.out.println(harry.getName());
        System.out.println(harry.salary);
        System.out.println(harry.getSalary());

    }
}
