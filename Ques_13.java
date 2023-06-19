// package Module_3;

import java.util.Scanner;

public class Ques_13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String s1 = "HelloHeyu";
        String s2 = null;
        String s3 = "World";
        String s4 = "    sdsdss   ";
        // number of characters in the string
        System.out.println(s.length());

        // String is null or not
        if (s2 == null) {
            System.out.println("NUll");
        } else {
            System.out.println("Not Null");
        }

        // char at 3rd index
        System.out.println(s.charAt(3));

        // compare two strings by ignoring case
        System.out.println(s.compareToIgnoreCase(s1));

        // join three strings
        System.out.println(s1.concat(s3).concat(s4));

        // Convert to upper case
        System.out.println(s.toUpperCase());

        // Convert to lower case
        System.out.println(s.toLowerCase());

        // replaceAll
        System.out.println(s1.replaceAll("He", "Ol"));

        // trim on s4
        System.out.println(s4.trim());

        // split the given string
        for (int i = 0; i < s1.split("e").length; i++) {
            System.out.println(s1.split("e")[i]);
        }
    }
}







