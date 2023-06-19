interface A{
  public void display1();
}
  
interface B{
   public void display2();
}
  
class C implements A,B{
  public void display1(){
   System.out.println("This is display_1 function: ");
  }
  public void display2(){
    System.out.println("This is display_2 function: ");
  }
}

public class Ques_5 {
      public static void main(String[] args){
      C mp=new C();
      mp.display1();
      mp.display2();
    }
}
