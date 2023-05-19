#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
        int temp;
        for(int i=0; i<(n/2)*2; i=i+2)
        {
            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
        }

        int ans,res;
        for(int i=0; i<n; i++)
        {
            ans=(int)s[i];
            
            res=(122-ans)+97;
            s[i]=(char)res;
        }
        cout<<s<<endl;
	}
	
	return 0;
}
