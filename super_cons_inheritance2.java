class base1 {
    public int x;

    // constructor
    public base1() {
        System.out.println("i am a base1 class of constructor with zero atgument: ");
    }

    public base1(int c) {
        System.out.println("i am a base1 class ofconstructor of one argument: ");
    }

    public base1(int c,int d) {
        System.out.println("i am a base1 class ofconstructor of two argument: ");
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getX() {
        return x;
    }
}

class derived1 extends base1 {

    // constructor
    public derived1() {
        super(0);
        System.out.println("I am derived class1 of constructor with zero argument");
    }

    public derived1(int y, int z) {
        // super(x); or  super(z);  or  super(0);
        super(y);
        System.out.println("I am derived class1 of constructor of two argument");
    }

    public int y;

    public void setY(int y) {
        this.y = y;
    }

    public int getY() {
        return y;

    }
}

class childDerived extends derived1 {
    public childDerived() {
     
        System.out.println("I am childDerived of constructor");
    }

    public childDerived(int x, int y, int z) {
        super(x,y); 
        System.out.println("I am childDerived of constructor with three argument");
    }
}

public class super_cons_inheritance2 {
    public static void main(String[] args) {
        // base1 b = new base1();
        // derived1 d1 = new derived1();
        // derived1 d2 = new derived1(3,5);
        childDerived d3 = new childDerived(5,6,7);
    }
}


