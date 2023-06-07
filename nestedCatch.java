public class nestedCatch {
    public static void main(String args[]){
   try{
    int a=10,b=0,c=a/b;
    System.out.println(c);
   }
   catch(Exception e){
    System.out.println("Thisis arithmetic error: ");

    try{
        int arr[]={5,6,7,15};
        System.out.println(arr[9]);
    }
    catch(Exception d){
   System.out.println("This is error array: ");
    }
   }
   System.out.println("This is main end: ");
    }
}
