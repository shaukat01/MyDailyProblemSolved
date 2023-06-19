import java.util.*;
import java.io.*;

public class Ques_15 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        BufferedWriter bw = new BufferedWriter(new FileWriter("sha1.txt"));
      
        while (true) {
          System.out.println("Enter New Line to add the file and write stop tp stop:");
        String str = sc.nextLine();
            if (str.equals("stop")) {
                break;
            }

            bw.write(str);
            bw.write('\n');
            bw.flush();
        }
        bw.close();
        sc.close();
    }
}
