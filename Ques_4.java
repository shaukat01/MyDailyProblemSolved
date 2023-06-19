import java.util.*;


class Employee{
    final float salary=50000;
    Employee(){
        System.out.println("This is Employee constructor");
    }
    Employee(int val){
        System.out.println("This is Employee parameterized constructor in val is: "+val);
    }
    public void yearOfExp(){
        int exp=25;
        System.out.println("The year of Experience is"+exp);
    }
}

class Permanent extends Employee{
    Permanent(){
        super(10);
        System.out.println("This is permanent constructor");
    }
    public void yearOfExp(){
        int exp=12;
        System.out.println("The year of Experience is"+exp);
    }
}

class Temprorary extends Employee{
    Temprorary(){
        System.out.println("This is temprorary constructor");
    }
    public void yearOfExp(){
        int exp=3;
        System.out.println("The year of Experience is"+exp);
    }
}
public class Ques_4{
    public static void main(String [] args){
        Permanent p = new Permanent();
        Temprorary t= new Temprorary();
        System.out.println("The salary of all Permanent employees "+p.salary);
        System.out.println("The salary of all Temproray employees "+t.salary);
        p.yearOfExp();
        t.yearOfExp();
    }
}