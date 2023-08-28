/* Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.
Class ID	Ship Class
B or b	BattleShip
C or c	Cruiser
D or d	Destroyer
F or f	Frigate

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
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		  //  String ch1;
		  //  ch1=sc.next();
		    char ch=sc.next().charAt(0);
		    if(ch=='B' || ch== 'b' ){
		        System.out.println("BattleShip");
		    }
		    else if(ch=='c'|| ch== 'C'){
		        System.out.println("Cruiser");
		    }
		    else if(ch=='D' || ch== 'd'){
		        System.out.println("Destroyer");
		    }
		    else if(ch=='F' || ch== 'f'){
		        System.out.println("Frigate");
		    }
		    t--;
		}
	}
}
