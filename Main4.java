import mypack.*; 


   //different package but not a   class
   public class Main4 {
    public static void main(String[] args){
           All ll=new All();
        
        System.out.println(ll.a);
      //  System.out.println(ll.b);  //this is private
        // System.out.println(ll.c);
        // System.out.println(ll.d);

       //for methods
       ll.fun1();
      //    ll.fun2();  //this is private
      //    ll.fun3();
      //    ll.fun4();
  }
    }

