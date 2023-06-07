class A extends Thread
{
    public void run()
    {
        String n = Thread.currentThread().getName(); 
        try{
       for(int i=0;i<=3;i++){
        System.out.println(n);
        Thread.sleep(2000);
       }
        }
        catch(Exception e){
     
        }
    }
}


public class sleep {
public static void main(String[] args){
    A obj1=new A();
    A obj2=new A();
    A obj3=new A();

    obj1.setName("thread 1");
    obj2.setName("thread 2");
    obj3.setName("thread 3");

    obj1.start();
    obj2.start();
    obj3.start();
}
}
