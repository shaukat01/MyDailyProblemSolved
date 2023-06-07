
interface MyCamera{
   void takeSnap();
   void recordVedio();

 default void record4kVedio(){//by writing default we can write function body in interface  also
   System.out.println("Recording is in 4Kvedios in interface: ");
   }
}


interface MyWifi{
   String[] getNetwork();
   void connectToNetwork();
}


class MyCellPhone{
  void callNumber(int number){
  System.out.println("Phone NUmber: ");
  }
}


class SmartPhone extends MyCellPhone implements MyWifi,MyCamera{  //combination of interface and class
    public void takeSnap(){
        System.out.println("Taking Snap: ");
    }
    public void recordVedio(){
        System.out.println("Recording The Vedio: ");
    }
    public String[] getNetwork(){
        System.out.println("This is getNetwork: ");
        String[] net={"Harry","Ritik","Harendra"};
        return net;
    }

    public void connectToNetwork(){
        System.out.println("This is connect to network: ");
    }

    //below we are overwriting the default method
    public void record4kVedio(){//we must write public whenever we are writing function body 
        System.out.println("Recording is in 4Kvedios in child class: ");   //whenever we overwrite always printing of child class
        }

}


public class interfaceAndDefault {
    public static void main(String[] args){
  SmartPhone obj1=new SmartPhone();
    obj1.recordVedio();
    obj1.record4kVedio();
    }
}
