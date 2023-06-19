import java.util.*;
import java.io.*;
import java.net.*;

public class Client_6
{ 
	public static void main(String[] args) 
	{ 
        try
        {
            Socket s = new Socket("localhost",5000);
            DataOutputStream out = new DataOutputStream(s.getOutputStream());
            DataInputStream in = new DataInputStream(s.getInputStream());
            Scanner sc = new Scanner(System.in);

            System.out.print("Enter file name: ");
            String fileName = sc.next();
             
            out.writeUTF(fileName);
            out.flush();
      
            
            String fileLine;
            while((fileLine=(String)in.readUTF())!=null)
            {
                System.out.println(fileLine);
            }
            

            sc.close();
            in.close();
            out.close();
            s.close();
        }
        catch(Exception e)
        {

        }
	}
}
