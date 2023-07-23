#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x, y, z, A, B;
	cin>>x>>y>>z;
	if((x*y)%z==0)
	{
	    A=x*y;
	    B=z;
	    cout<<A<<" "<<B<<endl;
	}
	else if((x*z)%y==0)
		{
	    A=x*z;
	    B=y;
	    cout<<A<<" "<<B<<endl;
	}
	else if((y*z)%x==0)
		{
	    A=y*z;
	    B=x;
	    cout<<A<<" "<<B<<endl;
	}
	else
	{
	    A=-1;
	   	cout<<A<<endl;
	}
	
	}
	return 0;
}
