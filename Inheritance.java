import java.util.*;

class base {
  public int x;
    public void setX(int x) {
        this.x = x;
    }

    public int getX() {
        return x;
    }

    public base() {

    }
}


class derived extends base {
  public int y;
   
  public void setY(){
    this.y=y;
  }

  public int getY(int y){
   return y;
  }

}

public class Inheritance {
     public static void main(String[] args) {
  // base d=new base(); //object of base class
    derived d=new derived();  //object of derived class
    d.setX(5);  //but here we are accessing property of base class also due to inheritance
    System.out.println(d.getX());//here too 
    }
}





