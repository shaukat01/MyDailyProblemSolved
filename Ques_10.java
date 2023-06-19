
class Hello extends Thread {
    public void run(){
        String str=Thread.currentThread().getName();
        Thread.currentThread().setPriority(10);
        for(int i=0;i<5;i++){
            System.out.println(str);
        }
    }
}

public class Ques_10 {
     public static void main(String[] args) throws Exception{
      Hello h =new Hello();
      h.setName("Shaukat");
      System.out.println(Thread.currentThread().getName()); //yeh main thread ko call kare ga
      
      h.start();
      h.join();
      Thread.sleep(2500);
  
    if(h.isAlive()){
        System.out.println("Thred is Running: ");
    }
    else{
        System.out.println("Thread is not running: ");
    }
     System.out.println(Thread.currentThread().getName());
     }
}
