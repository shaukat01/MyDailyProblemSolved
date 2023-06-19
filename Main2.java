class Test{
    //for variable
    public int a=6;
    private int b=5;
    protected int c=9;
    int d=10;

    //for function
    public void fun1(){
    System.out.println("this is public: ");
    }
    private void fun2(){
    System.out.println("This is private: ");
    }
    protected void fun3(){
    System.out.println("This is proteted: ");
    }
    
    void fun4(){
     System.out.println("This is default: ");
    }
     
}


  //same package but not a class
public class Main2 {
  public static void main(String[] args){
       Test tt=new Test();

        System.out.println(tt.a);
    //  System.out.println(tt.b);  //this is private
        System.out.println(tt.c);
        System.out.println(tt.d);

       //for methods
       tt.fun1();
    //    tt.fun2();  //this is private
       tt.fun3();
       tt.fun4();
  }
}

