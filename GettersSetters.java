import java.util.*;

class Employee {
    private int id;
    private String name;

    public void setName(String n) {
        name = n;
    }

    public String getName() {
        return name;
    }

    public void setId(int i) {
        id = i;
    }

    public int getId() {
        return id;
    }
}

public class GettersSetters {
    public static void main(String[] args) {

       Employee harry=new Employee() ;
    //    harry.id=12;   //due to private members we cannot give values from here
    //    harry.name="LOve";   //due to private members we cannot give values from here  
     
    harry.setName("CodeWith HArry");
    harry.setId(2);

    System.out.println(harry.getName());
    System.out.println(harry.getId());
    
    }
}
