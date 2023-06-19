import java.util.*;
import java.io.*;
import java.net.*;

public class practiceC{
  public static void main(String[] args)throws Exception{
          Socket s = new Socket("localhost",5000);
            DataOutputStream dout = new DataOutputStream(s.getOutputStream());
            DataInputStream din = new DataInputStream(s.getInputStream());
            Scanner sc = new Scanner(System.in);

            String filename=sc.nextLine();
            dout.writeUTF(filename);
            dout.flush();

            while(){
              
            }
  }
}