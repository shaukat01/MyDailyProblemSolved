import java.util.*;
import java.io.*;
import java.net.*;


public class Client {
    public static void main(String[] args) throws Exception{
     Socket s=new Socket("localhost",5000);
     DataInputStream din = new DataInputStream(s.getInputStream());
     DataOutputStream dout = new DataOutputStream(s.getOutputStream());

      Scanner sc = new Scanner(System.in);

      while(true){
         String send=sc.nextLine();
           dout.writeUTF(send);
           dout.flush();

         String response = (String)din.readUTF();
         if(response.equals("stop")){
          break;
         }  

        System.out.println("Server says: " + response);

      }
      sc.close();
      dout.close();
      din.close();
      s.close();
    }
}
