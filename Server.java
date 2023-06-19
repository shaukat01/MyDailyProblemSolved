import java.net.*;
import java.util.*;
import java.io.*;

public class Server {
      public static void main(String[] args) throws Exception{
        ServerSocket ss=new ServerSocket(5000);
        Socket s = ss.accept();
        
        DataInputStream din=new DataInputStream(s.getInputStream()); 
        DataOutputStream dout=new DataOutputStream(s.getOutputStream());

         Scanner sc = new Scanner(System.in);

         while(true){
              String response=(String)din.readUTF();
              if(response.equals("stop")){
                break;
              }

              System.out.println("Client says: " + response);

             String changes=response.toUpperCase(); 
               dout.writeUTF(changes);
               dout.flush();
        }
  
         sc.close();
         dout.close();
         din.close();
         s.close();
         ss.close();

      }
}
