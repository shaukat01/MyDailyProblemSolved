class test {
    void div(int a, int b) {
        if (b == 0) {
            throw new ArithmeticException();
        }
         else 
         {
            int c = a / b;
            System.out.println(c);
        }
    }
}


public class Throwww2 {
    public static void main(String args[]) {
    test obj1 =new test();
    // obj1.div(5,2);
    // or
    obj1.div(5,0);
    }
}
