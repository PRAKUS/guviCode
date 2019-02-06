/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package factorial;

import java.util.Scanner;

/**
 *
 * @author Pramod
 */
public class Factorial {

    /**
     * @param args the command line arguments
     */
    static int factorial_output=1;
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int factorial_input= input.nextInt();
        for ( int i=1;i<=factorial_input;i++)
        {
             factorial_output = factorial_output*i;
            
            
        }
        System.out.print(factorial_output);
    }
    
}
