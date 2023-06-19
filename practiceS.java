import java.util.*;
import java.io.*;
import java.net.*;

public class practiceS{
  public static void main(String[] args)throws Exception{
         ServerSocket ss = new ServerSocket(5000);
            Socket s = ss.accept();
            DataInputStream din = new DataInputStream(s.getInputStream());
            DataOutputStream dout = new DataOutputStream(s.getOutputStream());
            
            String filename=(String)din.readUTF();
            BufferedReader bin=new BufferedReader(new FileReader(filename));

            String filecontent;
           

            while(){
              
            }
  }
}