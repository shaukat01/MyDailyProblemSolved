class Employee{
    private int id;
    private String name;

    //constructor without argument
  public Employee(){
    id=36;
    name="Love";
  }

  //constructor with argument
  public Employee(String name){
   this.name=name;
  }

    public void SetName(String name){
      this.name=name;
    }

    public String GetName(){
        return name;
    }

    public void SetId(int id){
     this.id=id;
    }

    public int GetId(){
        return id;
}
}


public class Constructors {
     public static void main(String[] args){
        // Employee harry=new Employee(); //as we make tis if we make alredy constructor then constructor will call
        Employee harry=new Employee("programming language");
        // harry.SetName("codewithharry");  //if we make constructor as well as set then ans will come from set  
        // harry.SetId(5);
        System.out.println(harry.GetName());
        // System.out.println(harry.GetId());
     }
}





