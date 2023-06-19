import mypack.*;

  //different package but  class
  public class Main5 extends All {
    public static void main(String[] args){
        
        Main5 mm=new Main5();
 
        System.out.println(mm.a);
        //System.out.println(mm.b);  //this is private
        System.out.println(mm.c);
        // System.out.println(mm.d);

       //for methods
       mm.fun1();
       //mm.fun2();  //this is private
       mm.fun3();
        //mm.fun4();
  }
    } 
