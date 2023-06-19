//same class
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
     
   //printing output
  void printingSameClassVariable(){
    System.out.println(a);
    System.out.println(b);
    System.out.println(c);
    System.out.println(d);
  }
 
  void printingSameClassMethods(){
    fun1();
    fun2();
    fun3();
    fun4();
  }

}

public class Main1 {
  public static void main(String[] args){
   Test tt=new Test();
   tt.printingSameClassVariable();
   tt.printingSameClassMethods();
}
}


