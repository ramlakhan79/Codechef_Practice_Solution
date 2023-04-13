#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,a=0,b=0;
	    cin>>x>>y;
	    for(int i=1;i<=10;i++)
	    {
	    if(x>=10*(i-1)+1 && x<=10*i)
	    {
	        a=i;
	        
	    }
	    if(y>=10*(i-1)+1 && y<=10*i)
	    {
	        b=i;
	        
	    }
	    }
	    cout<<abs(a-b)<<endl;
	}
	
	return 0;
}
