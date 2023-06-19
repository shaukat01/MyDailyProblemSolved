import java.util.Random;

class RandomNumberGenerator implements Runnable{
   Random ran=new Random();
    public void run(){
    try{
      while(true){
        int randomNumber=ran.nextInt(100);
        System.out.println("Generated Number" + randomNumber);

        if(randomNumber % 2 == 0){
            Thread Square=new Thread(new SquareCalculator(randomNumber));
                 Square.start();
                 Square.join();
        }
        else{
            Thread cube = new Thread(new CubeCalculator(randomNumber));
            cube.start();
            cube.join();
        }
          Thread.sleep(1000);
      }
    }
    catch(Exception e){
        System.out.println(e);
    }
    }
}

class SquareCalculator implements Runnable{
   private int num;

   public SquareCalculator(int n)
   {
    this.num = n;
   }
   public void run(){
    int sq=num*num;
    System.out.println("Square of a number is    "+sq);
   }
   

}
class CubeCalculator implements Runnable{
   private int num;

   public CubeCalculator(int n)
   {
    this.num = n;
   }

  public void run(){
  int cu=num*num*num;
   System.out.println("Cube of a number is"+cu);
  }

}

public class Ques_12 {
    public static void main(String[] args){
     Thread th=new Thread(new RandomNumberGenerator());
      th.start();
    }  
}
