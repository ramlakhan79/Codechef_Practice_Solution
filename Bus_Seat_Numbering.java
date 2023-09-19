/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t,n;
		t=sc.nextInt();
		
		while(t>0){
		    n=sc.nextInt();
		    int deck=30;
		    int lower_deck=15,upper_deck=30;
		    int lower_double=10,lower_single=15;
		    int upper_double=25,upper_single=30;
		    if(n<=lower_deck){
		        if(n<=lower_double){
		            System.out.println("Lower Double");
		        }
		        else{
		            System.out.println("Lower Single");
		        }
		    }
		    else if(n>lower_deck && n<=upper_deck){
		        if(n>lower_single && n<=upper_double){
		            System.out.println("Upper Double");
		        }
		        else{
		            System.out.println("Upper Single");
		        }
		    }    
		    
		    t--;
		}
		
	}
}
