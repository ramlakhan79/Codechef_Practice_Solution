#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;while(t--)
	{
	    int n;cin>>n; int a[n]; int sum=0;
	       for(int i=0;i<n;i++)
	       {
	          cin>>a[i];
	           sum=sum+a[i];
	       }
	       if (n%2==0)
	       {cout<<abs(sum)/2<<endl;}
	       else
	       cout<<"-1"<<endl;
	}   
	return 0;
}
