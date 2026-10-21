import java.io.*;
import java.net.Socket;

public class ChatClientX 
{
    public static void main(String[] A) 
    {
        try 
        {
            
            
            Socket sobj = new Socket("localhost", 5100);
            System.out.println("Client gets connected with server successfully");

            PrintStream pobj = new PrintStream(sobj.getOutputStream());
            BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
            BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Marvellous client is running");
            String str1 = null, str2 = null;
            System.out.println("Enter msg for server : ");
            while (!(str1 = bobj2.readLine()).equals("End")) 
            {
                pobj.println(str1);
                str2 = bobj1.readLine();
                System.out.println("Servaer says : " + str2);
                System.out.println("Enter msg for server : ");
            } 
            pobj.close();
            bobj1.close();
            bobj2.close();
            sobj.close();

        }   // End of try
        catch (Exception e) 
        {
            System.out.println(e);
        }
    }  // End of main
}   // End of class   
