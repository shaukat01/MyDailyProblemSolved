import java.util.*;
import java.io.*;
import java.net.*;  


public class Client_5
{
	public static void main(String[] args) throws Exception
	{
		Socket s = new Socket("localhost",5000);
		DataOutputStream out = new DataOutputStream(s.getOutputStream());
		DataInputStream in = new DataInputStream(s.getInputStream());
		Scanner sc = new Scanner(System.in);

		while(true)
		{
			System.out.print("Enter message to send: ");
			String str = sc.nextLine();
			out.writeUTF(str);
			out.flush();
			if(str.equals("stop"))
			break;

			String str2 = (String)in.readUTF();
			System.out.println("Server says: "+str2);
			if(str2.equals("stop"))
			break;
		}

		sc.close();
		in.close();
		out.close();
		s.close();
	}
}


