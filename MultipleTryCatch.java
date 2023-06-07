public class MultipleTryCatch {
    public static void main(String args[]){
  //here first try catch cannot depend on other try catch
    try{
    int a=12,b=0;
    int c=a/b;
    System.out.println("This is try fist class: ");
    }

    catch(Exception e){
    System.out.println("Cannot divide by zero: ");
    }

    try{
        int arr[]={2,5,7,8,9};
        System.out.println(arr[7]);
    }

    catch(Exception e){
   System.out.println("we cannot excess the element beyound the array: ");
    }
    System.out.println("This is the main class: ");
    }
}
