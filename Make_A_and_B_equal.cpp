#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a==b){
	        cout<<"YES"<<endl;
	    }
	   else if (a<b)
	    {
	        while(a<b)
	        {
	            a=2*a;
	           
	        }if (a==b)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else if (a>b)
	    {
	        while(b<a)
	        {
	            b=2*b;
	        }if (a==b)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
