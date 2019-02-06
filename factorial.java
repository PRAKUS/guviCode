import java.util.*;
import java.io.*;
import java.lang.*;

/**
 *
 * @author Pramod
 */
public class factorial {

    /**
     * @param args the command line arguments
     */
    static int  factorial_output=1;
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int factorial_input= input.nextInt();
        for ( int i=1;i<=factorial_input;i++)
        {
            factorial_output =factorial_output*i;
            
            
        }
        System.out.print(factorial_output);
        
    }
    
}
