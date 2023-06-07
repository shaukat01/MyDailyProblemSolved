class InvalidAgeException extends Exception{  //here Exception super class exception
  InvalidAgeException(String msg)  //constructor
  {
    System.out.println("Constructor is called:");
    System.out.println(msg);
  }

}

public class userDefinedException {
    public static void main(String[] args){
    try{
        vote(19);
    }
    catch(Exception e){
        System.out.println(e);
    }
    }
      public static void vote(int age) throws InvalidAgeException
    {
        if(age>18)
        {
            System.out.println("Inside exception block:");
            throw new InvalidAgeException("Not Eligible for voting: ");
            // System.out.println("This line will not execute:");
        }
        else{
           System.out.println("Eligible for Voting: ");
        }
    }
}

