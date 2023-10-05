#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll T;
	cin>>T;
	
	while(T--)
	{
	    ll a,b,c=0;
	    cin>>a>>b;
	    while(a/b)
	    {
	        c++;
	        a=a/b;
	    }
	    cout<<c+1<<endl;
	}
	return 0;
}
