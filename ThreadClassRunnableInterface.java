
class A implements Runnable{ //Runnable is inbulit interface 
   public void run(){ //this inbuilt run is not under Runnable interface it is under Thread class
    for(int i=0;i<=5;i++){
        System.out.println("Harry: ");
    }
   }
}


public class ThreadClassRunnableInterface {
    public static void main(String args[]){
    A obj1=new A();
    // obj1.start();  //it will give error because 
   
    Thread obj2=new Thread(obj1);//this is inbuilt thread object we are creating just because to execute the run function as we already know that run inside thread class it is not under Runnable interface
    obj2.start(); //now it is work

    for(int i=0;i<=5;i++){
        System.out.println("Khan: ");
    }
    }
}

//note: same as ThreadclassExtending it has no proper  sequence of output because it is also thread na 
