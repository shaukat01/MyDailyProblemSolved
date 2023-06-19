import java.util.*;
import java.io.*;
import java.net.*;
  
public class Server_6
{
	public static void main(String[] args)
	{ 
        try
        {
            ServerSocket ss = new ServerSocket(5000);
            Socket s = ss.accept();
            DataInputStream in = new DataInputStream(s.getInputStream());
            DataOutputStream out = new DataOutputStream(s.getOutputStream());
            
            
            String fileName = (String)in.readUTF();
            BufferedReader br = new BufferedReader(new FileReader(fileName)); 
            String fileContent;
            while((fileContent = br.readLine())!=null)
            {
                out.writeUTF(fileContent);
                out.flush();
            }

            System.out.println("File Contents Sent");

            br.close();
            out.close();
            in.close();
        }
        catch(FileNotFoundException e)
        {
            System.out.println("No such file exists");
        }
        catch(Exception e)
        {

        }
	}

}
