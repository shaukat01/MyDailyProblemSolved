//Note-> while in case of ,if we use this access modifiers through packages then we can access only public modifiers and rest all 3 we cannot find


class A{
    public int x=89;
    protected int y=80;
    int z=78; //it is  nomodifier also called default
    private int w=98;


    public void met1(){
    //the function which is inside parent class(A) can access all modifiers
    System.out.println("This is inside class A: ");
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
        System.out.println(w);
        
    } 
}

class B extends A{
    public void met2(){
        //the function which is inside inherited class can access all access modifiers except private 
        System.out.println("This is inside class B: ");
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
        // System.out.println(w);
    }
  
}

public class AccessModifiers {
    public static void main(String[] args){
   A obj1=new A(); 
   obj1.met1();
   B obj2=new B();
   obj2.met2();
   obj2.met1();
   //from main function we can access all except private members
   System.out.println("This is inside main function: ");
   System.out.println(obj1.x);
   System.out.println(obj1.y);
   System.out.println(obj1.z);
//    System.out.println(obj1.w);


    }
}







