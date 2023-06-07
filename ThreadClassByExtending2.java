
//Example of multiple thread 
class A extends Thread { //this function have thread
    public void fun(){
        for(int i=0;i<5;i++){ 
            System.out.println("Harry: ");
        }
    }
}

public class ThreadClassByExtending2 {  //This function main have  also thread
    public static void main(String args[]){
  A t=new A();
  t.fun();
  for(int i=0;i<12;i++){//this is the thread od main and isko main ka thread execute karwaaye ga
    System.out.println("Khan: ");
}
    }
}

//note : the output of this code is systematically it will come first function of fun()  then output of main function because we have created only one thread 



