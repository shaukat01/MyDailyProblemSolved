// public class Methods {
// //     //mehods is always written above of main function
//     public static int sum(int a,int b){
//         return a+b;
//     }
//     public static void main(String[] args){
//      int d=sum(4,5);//calling a function without using object simply lie calling a function
//      System.out.println(d);
//     }
// }


public class Methods {
// //     //mehods is always written above of main function
    public int sum(int a,int b){
        return a+b;
    }
    public static void main(String[] args){
    //    calling a function without using static in function...by using object we are calling function
    Methods obj=new Methods();
    int d=obj.sum(5,6);
     System.out.println(d);
    }
}
