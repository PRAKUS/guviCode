import java.util.*;
import java.lang.*;
import java.io.*;
class stringreverse
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner input=new Scanner(System.in);
        String letter=input.nextLine();
        int length=letter.length();
        char reverse;
        for ( int i=(length-1);i>=0;i--)
        {
            reverse=letter.charAt(i);
            System.out.print(reverse);
        }
	}
}
