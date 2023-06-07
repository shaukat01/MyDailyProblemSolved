public class Throwsss {
    public static void main(String args[]) {
        for (int i = 1; i <= 10; i++) {
            System.out.println(i);
            Thread.sleep(4);//it will not compile it will give exception 
        }
    }
}


//this is done through throws 
// public class Throwsss {
//     public static void main(String args[]) throws InterruptedException {
//         for (int i = 1; i <= 10; i++) {
//             System.out.println(i);
//             Thread.sleep(1000);//it will run because main will handle the exception through  throws keyword
//         }
//     }
// }

// or

//here we are doing through same thing through try catch block
// public class Throwsss {
//     public static void main(String args[]) {
//         for (int i = 1; i <= 10; i++) {
//             try{
//             System.out.println(i);
//             Thread.sleep(1000);
//         }
//         catch(Exception e){
//             System.out.println(e);
//         }
//     }
//     }
// }
