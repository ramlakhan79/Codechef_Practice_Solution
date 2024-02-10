#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n],b[n],sum,add;
	    add=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i]>>b[i];
	    }
	    
	    for(int i=0;i<=8;i++)
	    {
	        sum=0;
	        for(int j=0;j<n;j++)
	        {
	            if(i==a[j] && b[j]>sum)
	            {
	                sum=b[j];
	            }
	        }
	        add=add+sum;
	    }
	    cout<<add<<"\n";
	}
	return 0;
}
