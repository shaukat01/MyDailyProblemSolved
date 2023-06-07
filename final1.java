// // 
//  class FinalMethodExample {
//     public final void display(){
//        System.out.println("Hello welcome to Tutorialspoint");
//     }
//  }
 
//  class Sample extends FinalMethodExample{
//     //    public void display(){  //we cannot create method with same name if we use final keywprd in parent class
//         //   System.out.println("hi");
//     //    }
//  }
 
//  public class final1{
//     public static void main(String args[]){
//        FinalMethodExample obj1=new FinalMethodExample();
//        obj1.display();
//     }
//  }
    
    
 
 //use of final word in variable queestion3
 
//  public class final1 {
//    final int x = 10;
 
//    public static void main(String[] args) {
//      final1 myObj = new final1();
//     //  myObj.x = 25; // will generate an error because we already use final in x so we cannot change
//      System.out.println(myObj.x); 
//    }
//  }
 
 
//  //use of final in method  question3
 
  final class FinalMethodExample {
    public void display(){
       System.out.println("Hello welcome to Tutorialspoint");
    }
 }
 
//  class Sample extends FinalMethodExample{   //we cannot inherit final class 
//        public void display(){  //we cannot create method with same name if we use final keywprd in parent class
//           System.out.println("hi");
//        }
//  }
 
 public class final1{
    public static void main(String args[]){
       FinalMethodExample obj1=new FinalMethodExample();
       obj1.display();
    }
 }