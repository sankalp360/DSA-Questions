import java.io.*;
import java.util.*;

public class Main {

	public static String compression1(String str){
		// write your code here
		String output = "";
        for(int i=1; i<str.length(); i++)
        {
            if(str.charAt(i-1) == str.charAt(i))
            {
                continue;
            }
            else
            {
                output += str.charAt(i-1);
            }
            
        }
        output += str.charAt(str.length() -1);
		return output;
	}

	public static String compression2(String str){
		// write your code here
		

		String output = "";
		char currentChar = str.charAt(0);
        int cnt = 1;
        for(int i=1; i<str.length(); i++)
        {
            if(str.charAt(i-1) == str.charAt(i))
            {
                cnt++;
            }
            else
            {
                output += currentChar;
                output += cnt;
                cnt = 1;
                currentChar = str.charAt(i);
            }
        }
        output += currentChar;
        output += cnt;
        
		return output;
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		System.out.println(compression1(str));
		System.out.println(compression2(str));
	}

}
