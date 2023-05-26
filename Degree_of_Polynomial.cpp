#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;while(t--)
	{
	    int n;cin>>n;int a[n]; int l=0;
	    for (int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=1;i<=n;i++)
	    {
	        if (a[i]!=0)
	        l=i;
	    }cout<<l-1<<endl;
	}
	return 0;
}
