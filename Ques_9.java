class test {
    void div(int a, int b) throws Exception { // ju call kiya hai div ko wahi throw handle kare ga
        if (b == 0) {
            throw new ArithmeticException("new exception");
        } else {
            int c = a / b;
            System.out.println(c);
        }
    }
}


public class Ques_9{
    public static void main(String args[])  { //ju main function ko call kiya wahi exception handle karega it means jvm handle karega ab
        try{
        test obj1 = new test();
        // obj1.div(5,2);
        // or
        obj1.div(5,0);
        }
        catch(Exception e){
            System.out.println("Exception Handled: "+e);
        }
        
    }
}

