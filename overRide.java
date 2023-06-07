class A{
  public void met(){
    System.out.println("Harry: ");
  }
}

class B extends A{
@Override
    public void met(){
        System.out.println("Khan: ");
        }   
}

public class overRide {
     public static void main(String args[]){
        // A obj1 =new A();
        // obj1.met();
        B obj2=new B();
        obj2.met();
     }
}
