
public class nestedTry {
    public static void main(String args[]) {
        try {
            try {
        int arr[]={4,55,6,7,8};
        System.out.println(arr[2]);
            } 
            catch (Exception e) 
            {
        System.out.println("Aray Index Error: "); 
            }
            int a=19,b=0,c;
            c=a/b;
            System.out.println(c);
        }
         catch (Exception e) 
         {
    System.out.println("Arithmetic Error: ");
        }
         System.out.println("Main Method: ");
    }
}

