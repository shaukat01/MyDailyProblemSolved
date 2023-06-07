// Allthe properties in interface is final
interface Bicycle{
    int a=32;
   public  void applyBrake(int decrement);  //interface do not contain function body
    public void speedUp(int decrement);
}


class AvonCycle implements Bicycle{  //in case of interface we have to write implements
      int a=36;//this is valid
      void blowHorn(){   //we can not write other function also which is not declared in interface class also
            System.out.println("Pee Poo Pee Poo: ");
      }
   public void applyBrake(int decrement){   //here we are writing function body which is declared in interface class  and we must write public those method which is declared in inteface body
    System.out.println("Apply Brake: ");
     }

    public void speedUp(int decrement){ //here also we must write public before those method which is declared in interface 
     System.out.println("Speed fast or slow: ");
     }
}


public class Interface {
       public static void main(String[] args){
        AvonCycle obj1=new AvonCycle();
        obj1.applyBrake(5);
        System.out.println(obj1.a); //it will print a of avonCycle if a is not given in avonCycle then it print a of parent class this is interface
      // obj1.a=35;//we cannot modifiy the properties of interface class

      }
}











