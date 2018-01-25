import java.io.*;
import java.util.*;
class TestClass {
    public static void main(String args[] )  {
    	Scanner sc=new Scanner(System.in);
    	String input=sc.nextLine();
    //	System.out.println("All upper case:"+input.toUpperCase());
    //	System.out.println("All lower case:"+input.toLowerCase());
    	System.out.println(toggleString(input));
    	sc.close();
        }
        public static String toggleString(String input)
    	{
       		String toggled = ""; 
       		for(int i=0; i<input.length(); i++)
       		{
           			char letter = input.charAt(i);
           			if(Character.isUpperCase(input.charAt(i)))
           			{
                		letter = Character.toLowerCase(letter); 
                		toggled = toggled + letter; 
           			}
           			else if(Character.isLowerCase(input.charAt(i)))
           			{
               			letter = Character.toUpperCase(letter);
               			toggled = toggled + letter; 
           			}
       			
       		}	
       		return toggled; 
   		}
	}
