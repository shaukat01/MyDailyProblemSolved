class test {
    void div(int a, int b) throws ArithmeticException { // ju call kiya hai div ko wahi throw handle kare ga
        if (b == 0) {
            throw new ArithmeticException();
        } else {
            int c = a / b;
            System.out.println(c);
        }
    }
}


public class ThrowAndThrows {
    public static void main(String args[]) throws ArithmeticException { //ju main function ko call kiya wahi exception handle karega it means jvm handle karega ab
        test obj1 = new test();
        // obj1.div(5,2);
        // or
        obj1.div(5,0);
    }
}
