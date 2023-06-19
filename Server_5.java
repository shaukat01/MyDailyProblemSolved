import java.util.*;
import java.io.*;
import java.net.*;

public class Server_5
{
	public static void main(String[] args) throws Exception
	{
		ServerSocket ss = new ServerSocket(5000);
		Socket s = ss.accept();
		DataInputStream in = new DataInputStream(s.getInputStream());
		DataOutputStream out = new DataOutputStream(s.getOutputStream());
		Scanner sc = new Scanner(System.in);
		while(true) 
		{
		    String str = (String) in.readUTF();
		    System.out.println("Client says: "+str);
			if(str.equals("stop"))
			break;

		    System.out.print("Enter message to send to client: ");
		    String str2 = sc.nextLine();
		    out.writeUTF(str2);
		    out.flush();
		    if(str2.equals("stop"))
			break;
		}

		sc.close();
		out.close();
		in.close();
		s.close();
		ss.close();
	}
}
