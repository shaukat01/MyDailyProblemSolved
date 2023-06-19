class Book implements Runnable {
    static int available = 1;

    public static synchronized void Order() {
        if (available > 0) {
            System.out.println("Book order for:" + Thread.currentThread().getName());
            available -= 1;
        } else {
            System.out.println("Book Out of Stock for:" + Thread.currentThread().getName());
        }
    }
    public void run() {
        Order();
    }
}


public class Ques_11 {
    public static void main(String[] args) throws Exception {
        Thread t1 = new Thread(new Book(),"Ritik");
        Thread t2 = new Thread(new Book(),"Akarsh");
        Thread t3 = new Thread(new Book(),"Shaukat");
        Thread t4 = new Thread(new Book(),"Harendra");

     

            t1.start();
            t2.start();
            t3.start();
            t4.start();

    }
}