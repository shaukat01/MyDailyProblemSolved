public class SingleTryMultipleCatch {
    public static void main(String args[]){

        try{
        int a=10,b=0,c;
        c=a/b;
        System.out.println(c);
        
        int arr[]={5,8,9,7,15,3};
        System.out.println(arr[9]);
        
        String str="abc";
        System.out.println(str.toUpperCase());
    }

       catch(ArrayIndexOutOfBoundsException e){
       System.out.println("Array arror: ");
       } 
       catch(ArithmeticException e){
       System.out.println("Arithmetic error: ");
       }
       catch(Exception e){
       System.out.println("General error: ");
       }
    }
}











