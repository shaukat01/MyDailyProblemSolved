class A {
    public int a;
    public int harry() {
        return 5;
    }
    public void met1() {
        System.out.println("I am method 1 of class A: ");
    }
}

class B extends A {
    
    public int shaukat() {
        return 7;
    }
 @Override
    public void met1() {
        System.out.println("I am method 2 of class B: ");
    }
}

public class MethodOverriding {
    public static void main(String[] args) {
    //     A obj1 = new A();
    //   System.out.println(obj1.harry());
    //     obj1.met1();

        B obj2=new B();
        System.out.println(obj2.shaukat());
        obj2.met1();  //it will print the method of same clas B only..In case of method overriding there is no concept of inheriting
    }
}







