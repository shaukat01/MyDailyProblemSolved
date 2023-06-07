class A {
    private int value;

    public void setValue(int x) {
        value = x;
    }
    public int getValue() {
        return value;
    }
}

 public class encapsulation {
    public static void main(String[] args) {
   A obj1=new A();
   obj1.setValue(100);
   System.out.println((obj1.getValue()));
    }
}

