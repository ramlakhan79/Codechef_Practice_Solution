/*
    A bulb company claims that the average lifetime of its bulbs is at least X units.The company ran a test on 
    N bulbs. You are given the lifetime of N−1 of these bulbs. What is the minimum non-negative integer value of lifetime
    the remaining bulb can have, such that the claim of the company holds true?
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
		int t=sc.nextInt();
		while(t>0){    
		    int n=sc.nextInt();
		    int arr[]=new int[n-1];    // declare the array for take the bulbs lifetime value
		    int x=sc.nextInt();
		    int sum=0;
		    for(int i=0;i<n-1;i++){
		        arr[i]=sc.nextInt();
		        sum+=arr[i];    /// calculating the sum of bulbs lifetime
		    }
		    if(n*x>sum){
		        System.out.println(n*x-sum);
		    }
		    else{
		        System.out.println("0");
		    }
		    t--;
		}
	}
}
