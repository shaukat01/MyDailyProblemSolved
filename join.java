class A extends Thread{
   public void run(){
    // String name=Thread.currentThread().getName();
    for(int i=0;i<3;i++){
        System.out.println(i);
    }
   }
}


public class join {
    public static void main(String[] args){

    A obj1=new A();
    A obj2=new A();
    A obj3=new A();
    
    // obj1.setName("Thread 1");
    // obj2.setName("Thread 2");
    // obj3.setName("Thread 3");

    obj2.start();
    try{
    obj2.join();
    }
    catch(Exception e){
    
    }
    obj1.start();
    obj3.start();

    // String shaukat=Thread.currentThread().getName();
    for(int i=1;i<=3;i++){
        System.out.println(i);
    }
    }
}
