
//we are calculating sum of two numbers by using commandline argument 
//in this we will give input through whle running

//this is passsing arugment but we already decide how mannt element to be passed
// public class commandLineArrgument {
//     public static void main(String args[]){
//        int a,b,sum=0;
//        a=Integer.parseInt(args[0]);
//        b=Integer.parseInt(args[1]);
//        sum=a+b;
//        System.out.println(sum);
//     }
// }


//In this we dont know how many element is passing we can pass with unlimited element
public class commandLineArrgument {
    public static void main(String args[]){
     int sum=0,i;
     for(i=0;i<args.length;i++){
        sum=sum+Integer.parseInt(args[i]);
        System.out.println("Sum is: "+sum);
     }
    }
}








