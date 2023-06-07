class one {
    public void greet() {
        System.out.println("Good Morning: ");
    }

    public void name() {
        System.out.println("My name is java in one class: ");
    }
}


class two extends one {
    public void swagat() {
        System.out.println("good afterNoon: ");
    }

    public void name() {
        System.out.println("My name is java in two class:");
    }
}


public class DynamicMethodDispatch {
    public static void main(String[] args) {
        // one obj1 = new one();
        // obj1.greet();
        // obj1.name();
        
        // two obj2=new two();
        // obj2.name();
        // obj2.swagat();

        // two obj2=new one();//this is not valid
        one obj1=new two();  //this is valid..here one is an reference and two is an the object which is creating  
        // obj1.greet();  //it is allowed  
        // obj1.swagat();//it is not allowed...child class ke ussi function ko call kar ju parent class mealready hai
        obj1.name(); // it is allowed...and it will call the function of child class..->this is called dynamic method dispatch
    }
}





