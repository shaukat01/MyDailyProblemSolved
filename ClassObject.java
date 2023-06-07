//class always make ouside the main class
class Employee{  
    int id;
    String name;
    float salary;

    public void printDetails(){
        System.out.println("My id is:"+id);
        System.out.println("And my name is:"+name);
    }
   }

public class ClassObject {
    public static void main(String[] args){
    
        Employee harry=new Employee();
        Employee john=new Employee();
        
        //setting attributes for harry
        harry.id=12;
        harry.name="CodeWithHarry";
        harry.salary=34;

        //setting attributes for john
        john.id=17;
        john.name="john Mandela";
        john.salary=16;

        //calling the function inside the class  
        harry.printDetails();
        john.printDetails();

    }
}
