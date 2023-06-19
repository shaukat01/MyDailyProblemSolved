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


//   same package but aclass
public class Main3 extends Test {
  public static void main(String[] args){
     Main3 mm=new Main3();

        System.out.println(mm.a);
    //  System.out.println(mm.b);  //this is private
        System.out.println(mm.c);
       System.out.println(mm.d);

       //for methods
       mm.fun1();
      //  mm.fun2();  //this is private
       mm.fun3();
       mm.fun4();
  }
}



