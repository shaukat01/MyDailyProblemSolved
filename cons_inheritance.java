class base1 {
    public int x;

    // constructor
    public base1() {
        System.out.println("i am a base1 class ofconstructor: ");
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
        System.out.println("I am derived class1 of constructor");
    }

    public int y;

    public void setY(int y) {
        this.y = y;
    }

    public int getY() {
        return y;

    }
}

public class cons_inheritance {
    public static void main(String[] args) {
        base1 b = new base1();  //it call only base class constuctor because it is parent
        derived1 d = new derived1();//it call first base class constrctor constructor then it calls its own derived class constructor because it inherits from base(parent) class
    }
}
