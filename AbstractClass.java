//abstract class can have both abstract method as well as not abstract method 

abstract class base1 {
    public base1() {
        System.out.println("I am constructor of class base1: ");
    }

    public void harry() {
        System.out.println("I am harry function inside base class");
    }

    abstract public void greet1(); //in abstract class if we want to make abstract method then here we declare only we cannot write body

    abstract public void greet2();
}


// abstract class derived2 extends base1 { // abstract class se hum ne inherit kar ke ek abstract class banaya and jsroori nahi hai saare abstract method ko hum isme inintialse kare
//     public void th() {
//         System.out.println("I am good");
//     }
// }


class derived extends base1 { //abstract class se hum ne inherir kiya ha and uske abstrct mathod ko isme initialise karna must hai  
    @Override
    public void greet1() {
        System.out.println("Good morning");
    }

    public void greet2() {
        System.out.println("Good Afternoon");
    }
    public void ritik(){
          System.out.println("This is ritik function inside inherited from abstract class");
    }
}


public class AbstractClass {
    public void main(String[] args) {
//    base1 obj1=new base1();//we cannot make object of abstract class
    //  derived2 obj1=new derived2();  //here it inherits from abstract class but it is also abstract classwe cannot make object of abstract class
     derived obj1=new derived();//this is possible because it is not abstract class  it just implementating the abstract method in itself class 
    }
}






