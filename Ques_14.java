import java.util.*;
import java.io.*;

public class Ques_14 {
    public static void main(String[] args) {
        try {
            int nl = 0, nc = 0, nw = 0;

            BufferedReader br = new BufferedReader(new FileReader("sha.txt"));

            String str;

            while ((str = br.readLine()) != null) {
                nl++;
                nc += str.length();
                StringTokenizer tt = new StringTokenizer(str);
                nw += tt.countTokens();
            }

            System.out.println("NUmber of lines is: " + nl);
            System.out.println("Number of character is: " + nc);
            System.out.println("Number of word is" + nw);

            br.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
