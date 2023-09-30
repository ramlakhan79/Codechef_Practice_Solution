#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{ int store=0,c=0;
	    int n,k;
	    cin>>n>>k;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        v.push_back(a);
	    }
	    for(int i=0;i<n;i++)
	    {
	        
	        if(v[i]>=k)
	        {
	           c=1; 
	           
	        }
	        else
	        {
	          store=i+1;
	          c=0;
	          break;
	        }
	       v[i+1]+=v[i]-k;
	    }
	     if(c)
	        {
	            cout<<"YES"<<endl;
	        }
	        else 
	         cout<<"NO"<<" "<<store<<endl;
	}
	return 0;
}
