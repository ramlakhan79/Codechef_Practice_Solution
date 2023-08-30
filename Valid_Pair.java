/*  
Chef has three socks in his drawer. Each sock has one of 10 possible colours, which are represented by integers between 1 and 10. Specifically, the colours of the socks are 
A, B, and C.
Chef has to wear two socks which have the same colour. Help Chef find out if that is possible or not.
*/


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
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		int b=sc.nextInt();
		int c=sc.nextInt();
		if(a==b || a==c || b==c || b==a){
		    System.out.println("YES");
		}
		else{
		    System.out.println("NO");
		}
	}
}
