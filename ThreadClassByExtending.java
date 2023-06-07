//Example of single Thtreading
// class A extends Thread { //this function have thread
//     @Override
//     public void run(){//this function is already inbuilt in thread class so we can use @override 
//         for(int i=0;i<5;i++){
//             System.out.println("Harry: ");
//         }
//     }
// }   

// public class ThreadClassByExtending {  //This function main do not have thread
//     public static void main(String args[]){
//     A obj1=new A();
//     obj1.start();
//     }
// }



//Example of multiple thread 
class A extends Thread { //this function have thread
    // @Override
    public void run(){//this function is already inbuilt in thread class so we can use @override  and isko class A ka thread execute karwaaye ga
        for(int i=0;i<5;i++){ 
            System.out.println("Harry: ");
        }
    }
}

public class ThreadClassByExtending {  //This function main have  also thread
    public static void main(String args[]){
  A t=new A();
  t.start();
  for(int i=0;i<12;i++){//this is the thread od main and isko main ka thread execute karwaaye ga
    System.out.println("Khan: ");
}
    }
}

//note : the output of this code is not systematically it will come randmoly because we have created two thread they both working simultaneously


